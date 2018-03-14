// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2014-2017 XDN-project developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <cstdint>
#include <initializer_list>

namespace CryptoNote {
    namespace parameters {

        const uint64_t CRYPTONOTE_MAX_BLOCK_NUMBER =                 500000000;
        const size_t CRYPTONOTE_MAX_BLOCK_BLOB_SIZE =                500000000;
        const size_t CRYPTONOTE_MAX_TX_SIZE =                        1000000000;
        const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX =     0xDB; // addresses start with "0xDB"
        const size_t CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW =          6;
        const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT =          60 * 60 * 2;
        const size_t BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW =             30;
        const uint64_t MONEY_SUPPLY =                                UINT64_C(858986905600000000);
//===================================================================================
        const size_t CRYPTONOTE_REWARD_BLOCKS_WINDOW =               100;
        const size_t CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE =     200000; //size of block (bytes) after which reward for block calculated using block size
        const size_t CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1 =  32000; //size of block (bytes) after which reward for block calculated using block size
        const size_t CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE =        600;
        const size_t CRYPTONOTE_DISPLAY_DECIMAL_POINT =              8;
        // COIN - number of smallest units in one coin
        const uint64_t COIN =                                        UINT64_C(100000000); // pow(10, 8)
        const uint64_t MINIMUM_FEE =                                 UINT64_C(100000); // pow(10, 5)
        const uint64_t DEFAULT_DUST_THRESHOLD =                      UINT64_C(100000); // pow(10, 5)
//===================================================================================
        const uint64_t DIFFICULTY_TARGET =                           10; // seconds
        const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY =           24 * 60 * 60 / DIFFICULTY_TARGET;
        const size_t DIFFICULTY_WINDOW =                             20; // blocks
        const size_t DIFFICULTY_CUT =                                5; // timestamps to cut after sorting

        const size_t DIFFICULTY_LAG =                                15;
        static_assert(2 * DIFFICULTY_CUT <= DIFFICULTY_WINDOW - 2, "Bad DIFFICULTY_WINDOW or DIFFICULTY_CUT");
//===================================================================================
        const uint64_t DEPOSIT_MIN_AMOUNT =                          150 * COIN;
        const uint32_t DEPOSIT_MIN_TERM =                            11000;
        const uint32_t DEPOSIT_MAX_TERM =                            10 * 12 * 11000;
        const uint64_t DEPOSIT_MIN_TOTAL_RATE_FACTOR =               77000;
        const uint64_t DEPOSIT_MAX_TOTAL_RATE =                      11;

//===================================================================================
        static_assert(DEPOSIT_MIN_TERM > 0, "Bad DEPOSIT_MIN_TERM");
        static_assert(DEPOSIT_MIN_TERM <= DEPOSIT_MAX_TERM, "Bad DEPOSIT_MAX_TERM");
        static_assert(DEPOSIT_MIN_TERM * DEPOSIT_MAX_TOTAL_RATE > DEPOSIT_MIN_TOTAL_RATE_FACTOR, "Bad DEPOSIT_MIN_TOTAL_RATE_FACTOR or DEPOSIT_MAX_TOTAL_RATE");
//===================================================================================

        const size_t MAX_BLOCK_SIZE_INITIAL =                        CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE * 10;
        const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR =       100 * 1024;
        const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR =     365 * 24 * 60 * 60 / DIFFICULTY_TARGET;
//===================================================================================
        const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS =   1;
        const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS =  DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;

        const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME =                (60 * 60 * 14); //seconds, 14 hours
        const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = (60 * 60 * 24); //seconds, one day
//===================================================================================
        const uint64_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7; 
// CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL * CRYPTONOTE_MEMPOOL_TX_LIVETIME = time to forget tx

        const size_t FUSION_TX_MAX_SIZE = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE * 30 / 100;
        const size_t FUSION_TX_MIN_INPUT_COUNT =           12;
        const size_t FUSION_TX_MIN_IN_OUT_COUNT_RATIO =    4;

        const uint32_t UPGRADE_HEIGHT_V2 = 136212;
        const uint32_t UPGRADE_HEIGHT_V3 = 317950;
        const uint32_t UPGRADE_HEIGHT_V4 = 338000;
        const unsigned UPGRADE_VOTING_THRESHOLD =           98; // percent
//===================================================================================
        const size_t UPGRADE_VOTING_WINDOW =                EXPECTED_NUMBER_OF_BLOCKS_PER_DAY; // blocks
        const size_t UPGRADE_WINDOW =                       EXPECTED_NUMBER_OF_BLOCKS_PER_DAY; // blocks

        static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
        static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");
//===================================================================================
        const char CRYPTONOTE_BLOCKS_FILENAME[] =                "blocks.dat";
        const char CRYPTONOTE_BLOCKINDEXES_FILENAME[] =          "blockindexes.dat";
        const char CRYPTONOTE_BLOCKSCACHE_FILENAME[] =           "blockscache.dat";
        const char CRYPTONOTE_POOLDATA_FILENAME[] =              "poolstate.bin";
        const char P2P_NET_DATA_FILENAME[] =                     "p2pstate.bin";
        const char CRYPTONOTE_BLOCKCHAIN_INDICES_FILENAME[] =    "blockchainindices.dat";
        const char MINER_CONFIG_FILE_NAME[] =                    "miner_conf.json";
    } // parameters
//===================================================================================
    const uint64_t START_BLOCK_REWARD =                          (UINT64_C(320000) * parameters::COIN);
    const uint64_t MIN_BLOCK_REWARD =                            (UINT64_C(150) * parameters::COIN);
    const uint64_t REWARD_HALVING_INTERVAL =                     (UINT64_C(11000));
//===================================================================================
    const char CRYPTONOTE_NAME[] =                               "phfire";
    const char GENESIS_COINBASE_TX_HEX[] = "010601ff0001808088a5a9a307029b2e4c0281c0b02e7c53291a94d1d0cbff8883f8024f5142ee494ffbbd0880712101bee2e5eb875dc11f748aad11986d3294e0df2704fd40db6dadb32d5d5d304c02";
    const uint32_t GENESIS_NONCE = 420;
//===================================================================================
    const uint8_t TRANSACTION_VERSION_1 = 1;
    const uint8_t TRANSACTION_VERSION_2 = 2;
    const uint8_t BLOCK_MAJOR_VERSION_1 = 1;
    const uint8_t BLOCK_MAJOR_VERSION_2 = 2;
    const uint8_t BLOCK_MAJOR_VERSION_3 = 3;
    const uint8_t BLOCK_MAJOR_VERSION_4 = 4;
    const uint8_t BLOCK_MINOR_VERSION_0 = 0;
    const uint8_t BLOCK_MINOR_VERSION_1 = 1;
//===================================================================================
    const size_t BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT =          5000; //by default, blocks ids count in synchronizing
    const size_t BLOCKS_SYNCHRONIZING_DEFAULT_COUNT =              128; //by default, blocks count in blocks downloading
    const size_t COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT =           1000;
//===================================================================================
    const int P2P_DEFAULT_PORT = 42080;
    const int RPC_DEFAULT_PORT = 42081;
//===================================================================================
    const size_t P2P_LOCAL_WHITE_PEERLIST_LIMIT =                  300;
    const size_t P2P_LOCAL_GRAY_PEERLIST_LIMIT =                   750;
    const size_t P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE =            64 * 1024 * 1024; // 64 MB
    const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT =                 8;
    const size_t P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT =       70;
    const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL =                60; // seconds
    const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE =                   50000000; // 50000000 bytes maximum packet size
    const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE =                250;
    const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT =                4000; // 5 seconds
    const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT =           2000; // 2 seconds
    const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT =                    60 * 2 * 1000; // 2 minutes
    const size_t P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT =            4000; // 5 seconds
//===================================================================================
    const char P2P_STAT_TRUSTED_PUB_KEY[] = "85ae8734f90bc1ee295ceb0ec05a49852d4dbbc9d1c27a619b5f4bdf26a0196e";

    const std::initializer_list<const char*> SEED_NODES = {
        "65.34.219.46:42080",
        "67.172.27.42:42080",
        "68.172.27.6:42080",
        "79.74.170.207:42080",
        "71.74.219.163:42080",
    };

    struct CheckpointData {
        uint32_t height;
        const char* blockId;
    };

#ifdef __GNUC__
    __attribute__((unused))
#endif

    // You may add here other checkpoints using the following format:
    // {<block height>, "<block hash>"},
    const std::initializer_list<CheckpointData> CHECKPOINTS = {
        //{ 1100, "990a83b3e77ba5def86311da34793e09fa3b0a2875571bd59449173fddf4e129"},

    };

} // CryptoNote

#define ALLOW_DEBUG_COMMANDS
