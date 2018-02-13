
//Special rainmanp7 includes idea
//#if !defined(__DragonFly__) && !defined(__OpenBSD__) && !defined(__NetBSD__) && !defined(MACOSX) && !defined(_WIN32) && !defined(__CYGWIN__) && !defined(__sun)
#ifdef _WIN32
#define snprintf _snprintf
#include <crtdbg.h>
#include <Python.h>
#include <intrin.h>
#include <io.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <winsock.h>
#include <stdint.h>
#include <Windows.h>
#include <shlobj.h>
#include <strsafe.h>
#include <process.h>
#include <wincrypt.h>
#include <winsvc.h>
#include <direct.h>

#else

#include <algorithm>
#include <alloca.h>
#include <array>
#include <arpa/inet.h>
#include <assert.h>
#include <atomic>
#include <cassert>
#include <cerrno>
#include <chrono>
#include <cinttypes>
#include <condition_variable>
#include <cpuid.h>
#include <cstdio>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <cstring> // memcpy
#include <cctype>
#include <ctype.h>
#include <ctime>
#include <deque>
#include <emmintrin.h>
#include <errno.h>
#include <fcntl.h>
#include <fstream>
#include <functional>
#include <future>
#include <iomanip>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <malloc.h>
#include <map>
#include <memory>
#include <memory.h>
#include <mutex>
#include <netdb.h>
#include <netinet/in.h>
#include <new>
#include <numeric>
#include <ostream>
#include <pthread.h>
#include <Python.h>
#include <queue>
#include <random>
#include <set>
#include <signal.h>
#include <sstream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <streambuf>
#include <string>
#include <string.h>
#include <stdexcept>
#include <sys/epoll.h>
#include <sys/eventfd.h>
#include <sys/errno.h>
#include <sys/event.h>
#include <sys/mman.h>
#include <sys/param.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/timerfd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/queue.h>
#include <sys/timeb.h>
#include <sys/un.h>
#include <sys/utsname.h>
#include <system_error>
#include <termios.h>
#include <thread>
#include <time.h>
#include <type_traits>
#include <tuple>
#include <ucontext.h>
#include <unistd.h>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <windows.h>
#include <wmmintrin.h>
#include <ws2tcpip.h>
// BOOST AREA BEGIN ============================
#include <boost/asio.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/classification.hpp>
#include <boost/algorithm/string/trim.hpp>
#include <boost/algorithm/string/split.hpp>
#include <boost/archive/binary_oarchive.hpp>
#include <boost/archive/binary_iarchive.hpp>
#include <boost/bind.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/filesystem.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/foreach.hpp>
#include <boost/functional/hash.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/multi_index/composite_key.hpp>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/identity.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/multi_index/mem_fun.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/random_access_index.hpp>
#include <boost/optional.hpp>
#include <boost/program_options.hpp>
#include <boost/program_options/parsers.hpp>
#include <boost/program_options/options_description.hpp>
#include <boost/program_options/variables_map.hpp>
#include <boost/range/combine.hpp>
#include <boost/scope_exit.hpp>
#include <boost/utility.hpp>
#include <boost/utility/value_init.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/variant.hpp>
#include <boost/variant/static_visitor.hpp>
#include <boost/variant/apply_visitor.hpp>
// BOOST AREA END ============================
#endif
// 1st External Folder miniupnpc
//==========================================
#include "external/miniupnpc/bsdqueue.h"
#include "external/miniupnpc/codelength.h"
#include "external/miniupnpc/connecthostport.c"
#include "external/miniupnpc/connecthostport.h"
#include "external/miniupnpc/declspec.h"
#include "external/miniupnpc/igd_desc_parse.c"
#include "external/miniupnpc/igd_desc_parse.h"
#include "external/miniupnpc/minihttptestserver.c"
#include "external/miniupnpc/minisoap.c"
#include "external/miniupnpc/minisoap.h"
#include "external/miniupnpc/minissdpc.c"
#include "external/miniupnpc/minissdpc.h"
#include "external/miniupnpc/miniupnpc.c"
#include "external/miniupnpc/miniupnpc.h"
#include "external/miniupnpc/miniupnpcmodule.c"
#include "external/miniupnpc/miniupnpcstrings.h.in"
#include "external/miniupnpc/miniupnpctypes.h"
#include "external/miniupnpc/miniwget.c"
#include "external/miniupnpc/miniwget.h"
#include "external/miniupnpc/minixml.c"
#include "external/miniupnpc/minixml.h"
#include "external/miniupnpc/minixmlvalid.c"
#include "external/miniupnpc/portlistingparse.c"
#include "external/miniupnpc/portlistingparse.h"
#include "external/miniupnpc/receivedata.c"
#include "external/miniupnpc/receivedata.h"
#include "external/miniupnpc/testigddescparse.c"
#include "external/miniupnpc/testminiwget.c"
#include "external/miniupnpc/testminixml.c"
#include "external/miniupnpc/testupnpreplyparse.c"
#include "external/miniupnpc/upnpc.c"
#include "external/miniupnpc/upnpcommands.c"
#include "external/miniupnpc/upnpcommands.h"
#include "external/miniupnpc/upnperrors.c"
#include "external/miniupnpc/upnperrors.h"
#include "external/miniupnpc/upnpreplyparse.c"
#include "external/miniupnpc/upnpreplyparse.h"
#include "external/miniupnpc/wingenminiupnpcstrings.c"
//==========================================
// 2nd include Folder
//==========================================
#include "include/BlockchainExplorerData.h"
#include "include/CryptoNote.h"
#include "include/CryptoTypes.h"
#include "include/IBlockchainExplorer.h"
#include "include/INode.h"
#include "include/IObservable.h"
#include "include/IStreamSerializable.h"
#include "include/ITransaction.h"
#include "include/ITransfersContainer.h"
#include "include/ITransfersSynchronizer.h"
#include "include/IWallet.h"
#include "include/IWalletLegacy.h"
//==========================================
// 3rd src Folder BlockchainExplorer
//==========================================
#include "src/BlockchainExplorer/BlockchainExplorer.cpp"
#include "src/BlockchainExplorer/BlockchainExplorer.h"
#include "src/BlockchainExplorer/BlockchainExplorerDataBuilder.cpp"
#include "src/BlockchainExplorer/BlockchainExplorerDataBuilder.h"
#include "src/BlockchainExplorer/BlockchainExplorerErrors.cpp"
#include "src/BlockchainExplorer/BlockchainExplorerErrors.h"
//==========================================
// 4th src Folder Common
//==========================================
#include "src/Common/ArrayRef.h"
#include "src/Common/ArrayView.h"
#include "src/Common/Base58.cpp"
#include "src/Common/Base58.h"
#include "src/Common/BlockingQueue.cpp"
#include "src/Common/BlockingQueue.h"
#include "src/Common/CommandLine.cpp"
#include "src/Common/CommandLine.h"
#include "src/Common/ConsoleHandler.cpp"
#include "src/Common/ConsoleHandler.h"
#include "src/Common/ConsoleTools.cpp"
#include "src/Common/ConsoleTools.h"
#include "src/Common/IInputStream.cpp"
#include "src/Common/IInputStream.h"
#include "src/Common/int-util.h"
#include "src/Common/IOutputStream.cpp"
#include "src/Common/IOutputStream.h"
#include "src/Common/JsonValue.cpp"
#include "src/Common/JsonValue.h"
#include "src/Common/Math.cpp"
#include "src/Common/Math.h"
#include "src/Common/MemoryInputStream.cpp"
#include "src/Common/MemoryInputStream.h"
#include "src/Common/ObserverManager.h"
#include "src/Common/PathTools.cpp"
#include "src/Common/PathTools.h"
#include "src/Common/pod-class.h"
#include "src/Common/ScopeExit.cpp"
#include "src/Common/ScopeExit.h"
#include "src/Common/ShuffleGenerator.h"
#include "src/Common/SignalHandler.cpp"
#include "src/Common/SignalHandler.h"
#include "src/Common/static_assert.h"
#include "src/Common/StdInputStream.cpp"
#include "src/Common/StdInputStream.h"
#include "src/Common/StdOutputStream.cpp"
#include "src/Common/StdOutputStream.h"
#include "src/Common/StreamTools.cpp"
#include "src/Common/StreamTools.h"
#include "src/Common/StringBuffer.h"
#include "src/Common/StringInputStream.cpp"
#include "src/Common/StringInputStream.h"
#include "src/Common/StringOutputStream.cpp"
#include "src/Common/StringOutputStream.h"
#include "src/Common/StringTools.cpp"
#include "src/Common/StringTools.h"
#include "src/Common/StringView.cpp"
#include "src/Common/StringView.h"
#include "src/Common/Util.cpp"
#include "src/Common/Util.h"
#include "src/Common/Varint.h"
#include "src/Common/VectorOutputStream.cpp"
#include "src/Common/VectorOutputStream.h"
//==========================================
// 5th src Folder ConnectivityTool
//==========================================
#include "src/ConnectivityTool/ConnectivityTool.cpp"
//==========================================
// 6th src Folder crypto
//==========================================
#include "src/crypto/aesb.h"
#include "src/crypto/blake256.c"
#include "src/crypto/blake256.h"
#include "src/crypto/chacha.c"
#include "src/crypto/chacha.h"
#include "src/crypto/crypto.cpp"
#include "src/crypto/crypto.h"
#include "src/crypto/crypto-ops.c"
#include "src/crypto/crypto-ops.h"
#include "src/crypto/crypto-ops-data.c"
#include "src/crypto/generic-ops.h"
#include "src/crypto/groestl.c"
#include "src/crypto/groestl.h"
#include "src/crypto/groestl_tables.h"
#include "src/crypto/hash.c"
#include "src/crypto/hash.h"
#include "src/crypto/hash-extra-blake.c"
#include "src/crypto/hash-extra-groestl.c"
#include "src/crypto/hash-extra-jh.c"
#include "src/crypto/hash-extra-skein.c"
#include "src/crypto/hash-ops.h"
#include "src/crypto/initializer.h"
#include "src/crypto/jh.c"
#include "src/crypto/jh.h"
#include "src/crypto/keccak.c"
#include "src/crypto/keccak.h"
#include "src/crypto/oaes_config.h"
#include "src/crypto/oaes_lib.c"
#include "src/crypto/oaes_lib.h"
#include "src/crypto/random.c"
#include "src/crypto/random.h"
#include "src/crypto/rctTypes.h"
#include "src/crypto/skein.c"
#include "src/crypto/skein.h"
#include "src/crypto/skein_port.h"
#include "src/crypto/slow-hash.c"
#include "src/crypto/slow-hash.cpp"
#include "src/crypto/slow-hash.inl"
#include "src/crypto/tree-hash.c"
//==========================================
// 7th src Folder CryptoNoteCore
//==========================================
#include "src/CryptoNoteCore/Account.cpp"
#include "src/CryptoNoteCore/Account.h"
#include "src/CryptoNoteCore/Blockchain.cpp"
#include "src/CryptoNoteCore/Blockchain.h"
#include "src/CryptoNoteCore/BlockchainIndices.cpp"
#include "src/CryptoNoteCore/BlockchainIndices.h"
#include "src/CryptoNoteCore/BlockchainMessages.cpp"
#include "src/CryptoNoteCore/BlockchainMessages.h"
#include "src/CryptoNoteCore/BlockIndex.cpp"
#include "src/CryptoNoteCore/BlockIndex.h"
#include "src/CryptoNoteCore/Checkpoints.cpp"
#include "src/CryptoNoteCore/Checkpoints.h"
#include "src/CryptoNoteCore/Core.cpp"
#include "src/CryptoNoteCore/Core.h"
#include "src/CryptoNoteCore/CoreConfig.cpp"
#include "src/CryptoNoteCore/CoreConfig.h"
#include "src/CryptoNoteCore/CryptoNoteBasic.cpp"
#include "src/CryptoNoteCore/CryptoNoteBasic.h"
#include "src/CryptoNoteCore/CryptoNoteBasicImpl.cpp"
#include "src/CryptoNoteCore/CryptoNoteBasicImpl.h"
#include "src/CryptoNoteCore/CryptoNoteFormatUtils.cpp"
#include "src/CryptoNoteCore/CryptoNoteFormatUtils.h"
#include "src/CryptoNoteCore/CryptoNoteSerialization.cpp"
#include "src/CryptoNoteCore/CryptoNoteSerialization.h"
#include "src/CryptoNoteCore/CryptoNoteStatInfo.h"
#include "src/CryptoNoteCore/CryptoNoteTools.cpp"
#include "src/CryptoNoteCore/CryptoNoteTools.h"
#include "src/CryptoNoteCore/Currency.cpp"
#include "src/CryptoNoteCore/Currency.h"
#include "src/CryptoNoteCore/DepositIndex.cpp"
#include "src/CryptoNoteCore/DepositIndex.h"
#include "src/CryptoNoteCore/Difficulty.cpp"
#include "src/CryptoNoteCore/Difficulty.h"
#include "src/CryptoNoteCore/IBlock.cpp"
#include "src/CryptoNoteCore/IBlock.h"
#include "src/CryptoNoteCore/IBlockchainStorageObserver.h"
#include "src/CryptoNoteCore/ICore.h"
#include "src/CryptoNoteCore/ICoreObserver.h"
#include "src/CryptoNoteCore/IMinerHandler.h"
#include "src/CryptoNoteCore/IntrusiveLinkedList.h"
#include "src/CryptoNoteCore/ITimeProvider.cpp"
#include "src/CryptoNoteCore/ITimeProvider.h"
#include "src/CryptoNoteCore/ITransactionValidator.h"
#include "src/CryptoNoteCore/ITxPoolObserver.h"
#include "src/CryptoNoteCore/MessageQueue.h"
#include "src/CryptoNoteCore/Miner.cpp"
#include "src/CryptoNoteCore/Miner.h"
#include "src/CryptoNoteCore/MinerConfig.cpp"
#include "src/CryptoNoteCore/MinerConfig.h"
#include "src/CryptoNoteCore/OnceInInterval.h"
#include "src/CryptoNoteCore/SwappedMap.cpp"
#include "src/CryptoNoteCore/SwappedMap.h"
#include "src/CryptoNoteCore/SwappedVector.cpp"
#include "src/CryptoNoteCore/SwappedVector.h"
#include "src/CryptoNoteCore/Transaction.cpp"
#include "src/CryptoNoteCore/TransactionApi.h"
#include "src/CryptoNoteCore/TransactionApiExtra.h"
#include "src/CryptoNoteCore/TransactionExtra.cpp"
#include "src/CryptoNoteCore/TransactionExtra.h"
#include "src/CryptoNoteCore/TransactionPool.cpp"
#include "src/CryptoNoteCore/TransactionPool.h"
#include "src/CryptoNoteCore/TransactionPrefixImpl.cpp"
#include "src/CryptoNoteCore/TransactionUtils.cpp"
#include "src/CryptoNoteCore/TransactionUtils.h"
#include "src/CryptoNoteCore/UpgradeDetector.cpp"
#include "src/CryptoNoteCore/UpgradeDetector.h"
#include "src/CryptoNoteCore/VerificationContext.h"
//==========================================
// 8th src Folder CryptoNoteProtocol
//==========================================
#include "src/CryptoNoteProtocol/CryptoNoteProtocolDefinitions.h"
#include "src/CryptoNoteProtocol/CryptoNoteProtocolHandler.cpp"
#include "src/CryptoNoteProtocol/CryptoNoteProtocolHandler.h"
#include "src/CryptoNoteProtocol/CryptoNoteProtocolHandlerCommon.h"
#include "src/CryptoNoteProtocol/ICryptoNoteProtocolObserver.h"
#include "src/CryptoNoteProtocol/ICryptoNoteProtocolQuery.h"
//==========================================
// 9th src Folder Daemon
//==========================================
#include "src/Daemon/Daemon.cpp"
#include "src/Daemon/DaemonCommandsHandler.cpp"
#include "src/Daemon/DaemonCommandsHandler.h"
//==========================================
// 10th src Folder HTTP
//==========================================
#include "src/HTTP/HttpParser.cpp"
#include "src/HTTP/HttpParser.h"
#include "src/HTTP/HttpParserErrorCodes.cpp"
#include "src/HTTP/HttpParserErrorCodes.h"
#include "src/HTTP/HttpRequest.cpp"
#include "src/HTTP/HttpRequest.h"
#include "src/HTTP/HttpResponse.cpp"
#include "src/HTTP/HttpResponse.h"
//==========================================
// 11th src Folder InProcessNode
//==========================================
#include "src/InProcessNode/InProcessNode.cpp"
#include "src/InProcessNode/InProcessNode.h"
#include "src/InProcessNode/InProcessNodeErrors.cpp"
#include "src/InProcessNode/InProcessNodeErrors.h"
//==========================================
// 12th src Folder JsonRpcServer
//==========================================
#include "src/JsonRpcServer/JsonRpcServer.cpp"
#include "src/JsonRpcServer/JsonRpcServer.h"
//==========================================
// 13th src Folder Logging
//==========================================
#include "src/Logging/CommonLogger.cpp"
#include "src/Logging/CommonLogger.h"
#include "src/Logging/ConsoleLogger.cpp"
#include "src/Logging/ConsoleLogger.h"
#include "src/Logging/FileLogger.cpp"
#include "src/Logging/FileLogger.h"
#include "src/Logging/ILogger.cpp"
#include "src/Logging/ILogger.h"
#include "src/Logging/LoggerGroup.cpp"
#include "src/Logging/LoggerGroup.h"
#include "src/Logging/LoggerManager.cpp"
#include "src/Logging/LoggerManager.h"
#include "src/Logging/LoggerMessage.cpp"
#include "src/Logging/LoggerMessage.h"
#include "src/Logging/LoggerRef.cpp"
#include "src/Logging/LoggerRef.h"
#include "src/Logging/StreamLogger.cpp"
#include "src/Logging/StreamLogger.h"
//==========================================
// 14th src Folder Miner
//==========================================
#include "src/Miner/BlockchainMonitor.cpp"
#include "src/Miner/BlockchainMonitor.h"
#include "src/Miner/main.cpp"
#include "src/Miner/Miner.cpp"
#include "src/Miner/Miner.h"
#include "src/Miner/MinerEvent.h"
#include "src/Miner/MinerManager.cpp"
#include "src/Miner/MinerManager.h"
#include "src/Miner/MiningConfig.cpp"
#include "src/Miner/MiningConfig.h"
//==========================================
// 15th src Folder NodeRpcProxy
//==========================================
#include "src/NodeRpcProxy/NodeErrors.cpp"
#include "src/NodeRpcProxy/NodeErrors.h"
#include "src/NodeRpcProxy/NodeRpcProxy.cpp"
#include "src/NodeRpcProxy/NodeRpcProxy.h"
//==========================================
// 16th src Folder P2p
//==========================================
#include "src/P2p/ConnectionContext.h"
#include "src/P2p/IP2pNodeInternal.cpp"
#include "src/P2p/IP2pNodeInternal.h"
#include "src/P2p/LevinProtocol.cpp"
#include "src/P2p/LevinProtocol.h"
#include "src/P2p/NetNode.cpp"
#include "src/P2p/NetNode.h"
#include "src/P2p/NetNodeCommon.h"
#include "src/P2p/NetNodeConfig.cpp"
#include "src/P2p/NetNodeConfig.h"
#include "src/P2p/P2pConnectionProxy.cpp"
#include "src/P2p/P2pConnectionProxy.h"
#include "src/P2p/P2pContext.cpp"
#include "src/P2p/P2pContext.h"
#include "src/P2p/P2pContextOwner.cpp"
#include "src/P2p/P2pContextOwner.h"
#include "src/P2p/P2pInterfaces.cpp"
#include "src/P2p/P2pInterfaces.h"
#include "src/P2p/P2pNetworks.h"
#include "src/P2p/P2pNode.cpp"
#include "src/P2p/P2pNode.h"
#include "src/P2p/P2pNodeConfig.cpp"
#include "src/P2p/P2pNodeConfig.h"
#include "src/P2p/P2pProtocolDefinitions.h"
#include "src/P2p/P2pProtocolTypes.h"
#include "src/P2p/PeerListManager.cpp"
#include "src/P2p/PeerListManager.h"
//==========================================
// 17th src Folder PaymentGate
//==========================================
#include "src/PaymentGate/NodeFactory.cpp"
#include "src/PaymentGate/NodeFactory.h"
#include "src/PaymentGate/PaymentServiceJsonRpcMessages.cpp"
#include "src/PaymentGate/PaymentServiceJsonRpcMessages.h"
#include "src/PaymentGate/PaymentServiceJsonRpcServer.cpp"
#include "src/PaymentGate/PaymentServiceJsonRpcServer.h"
#include "src/PaymentGate/WalletFactory.cpp"
#include "src/PaymentGate/WalletFactory.h"
#include "src/PaymentGate/WalletService.cpp"
#include "src/PaymentGate/WalletService.h"
#include "src/PaymentGate/WalletServiceErrorCategory.cpp"
#include "src/PaymentGate/WalletServiceErrorCategory.h"
//==========================================
// 18th src Folder PaymentGateService
//==========================================
#include "src/PaymentGateService/ConfigurationManager.cpp"
#include "src/PaymentGateService/ConfigurationManager.h"
#include "src/PaymentGateService/main.cpp"
#include "src/PaymentGateService/PaymentGateService.cpp"
#include "src/PaymentGateService/PaymentGateService.h"
#include "src/PaymentGateService/PaymentServiceConfiguration.cpp"
#include "src/PaymentGateService/PaymentServiceConfiguration.h"
#include "src/PaymentGateService/RpcNodeConfiguration.cpp"
#include "src/PaymentGateService/RpcNodeConfiguration.h"
//==========================================
// 18th src Folder Platform/Linux
//==========================================
#include "src/Platform/Linux/System/Dispatcher.cpp"
#include "src/Platform/Linux/System/Dispatcher.h"
#include "src/Platform/Linux/System/ErrorMessage.cpp"
#include "src/Platform/Linux/System/ErrorMessage.h"
#include "src/Platform/Linux/System/Future.h"
#include "src/Platform/Linux/System/Ipv4Resolver.cpp"
#include "src/Platform/Linux/System/Ipv4Resolver.h"
#include "src/Platform/Linux/System/TcpConnection.cpp"
#include "src/Platform/Linux/System/TcpConnection.h"
#include "src/Platform/Linux/System/TcpConnector.cpp"
#include "src/Platform/Linux/System/TcpConnector.h"
#include "src/Platform/Linux/System/TcpListener.cpp"
#include "src/Platform/Linux/System/TcpListener.h"
#include "src/Platform/Linux/System/Timer.cpp"
#include "src/Platform/Linux/System/Timer.h"
//==========================================
// 18th src Folder Platform/mingw
//==========================================
#include "src/Platform/mingw/alloca.h"
//==========================================
// 19th src Folder Platform/msc
//==========================================
#include "src/Platform/msc/sys/param.h"
#include "src/Platform/msc/alloca.h"
#include "src/Platform/msc/stdbool.h"
//==========================================
// 20th src Folder Platform/OSX
//==========================================
#include "src/Platform/OSX/System/asm.s"
#include "src/Platform/OSX/System/Context.c"
#include "src/Platform/OSX/System/Context.h"
#include "src/Platform/OSX/System/Dispatcher.cpp"
#include "src/Platform/OSX/System/Dispatcher.h"
#include "src/Platform/OSX/System/ErrorMessage.cpp"
#include "src/Platform/OSX/System/ErrorMessage.h"
#include "src/Platform/OSX/System/Future.h"
#include "src/Platform/OSX/System/Ipv4Resolver.cpp"
#include "src/Platform/OSX/System/Ipv4Resolver.h"
#include "src/Platform/OSX/System/TcpConnection.cpp"
#include "src/Platform/OSX/System/TcpConnection.h"
#include "src/Platform/OSX/System/TcpConnector.cpp"
#include "src/Platform/OSX/System/TcpConnector.h"
#include "src/Platform/OSX/System/TcpListener.cpp"
#include "src/Platform/OSX/System/TcpListener.h"
#include "src/Platform/OSX/System/Timer.cpp"
#include "src/Platform/OSX/System/Timer.h"
//==========================================
// 21st src Folder Platform/Windows
//==========================================
#include "src/Platform/Windows/System/Dispatcher.cpp"
#include "src/Platform/Windows/System/Dispatcher.h"
#include "src/Platform/Windows/System/ErrorMessage.cpp"
#include "src/Platform/Windows/System/ErrorMessage.h"
#include "src/Platform/Windows/System/Future.h"
#include "src/Platform/Windows/System/Ipv4Resolver.cpp"
#include "src/Platform/Windows/System/Ipv4Resolver.h"
#include "src/Platform/Windows/System/TcpConnection.cpp"
#include "src/Platform/Windows/System/TcpConnection.h"
#include "src/Platform/Windows/System/TcpConnector.cpp"
#include "src/Platform/Windows/System/TcpConnector.h"
#include "src/Platform/Windows/System/TcpListener.cpp"
#include "src/Platform/Windows/System/TcpListener.h"
#include "src/Platform/Windows/System/Timer.cpp"
#include "src/Platform/Windows/System/Timer.h"
//==========================================
// 22nd src Folder Rpc
//==========================================
#include "src/Rpc/CoreRpcServerCommandsDefinitions.h"
#include "src/Rpc/CoreRpcServerErrorCodes.h"
#include "src/Rpc/HttpClient.cpp"
#include "src/Rpc/HttpClient.h"
#include "src/Rpc/HttpServer.cpp"
#include "src/Rpc/HttpServer.h"
#include "src/Rpc/JsonRpc.cpp"
#include "src/Rpc/JsonRpc.h"
#include "src/Rpc/RpcServer.cpp"
#include "src/Rpc/RpcServer.h"
#include "src/Rpc/RpcServerConfig.cpp"
#include "src/Rpc/RpcServerConfig.h"
//==========================================
// 23rd src Folder Serialization
//==========================================
#include "src/Serialization/BinaryInputStreamSerializer.cpp"
#include "src/Serialization/BinaryInputStreamSerializer.h"
#include "src/Serialization/BinaryOutputStreamSerializer.cpp"
#include "src/Serialization/BinaryOutputStreamSerializer.h"
#include "src/Serialization/BinarySerializationTools.h"
#include "src/Serialization/ISerializer.h"
#include "src/Serialization/IStream.h"
#include "src/Serialization/JsonInputStreamSerializer.cpp"
#include "src/Serialization/JsonInputStreamSerializer.h"
#include "src/Serialization/JsonInputValueSerializer.cpp"
#include "src/Serialization/JsonInputValueSerializer.h"
#include "src/Serialization/JsonOutputStreamSerializer.cpp"
#include "src/Serialization/JsonOutputStreamSerializer.h"
#include "src/Serialization/KVBinaryCommon.h"
#include "src/Serialization/KVBinaryInputStreamSerializer.cpp"
#include "src/Serialization/KVBinaryInputStreamSerializer.h"
#include "src/Serialization/KVBinaryOutputStreamSerializer.cpp"
#include "src/Serialization/KVBinaryOutputStreamSerializer.h"
#include "src/Serialization/MemoryStream.cpp"
#include "src/Serialization/MemoryStream.h"
#include "src/Serialization/SerializationOverloads.cpp"
#include "src/Serialization/SerializationOverloads.h"
#include "src/Serialization/SerializationTools.h"
//==========================================
// 24th src Folder SimpleWallet
//==========================================
#include "src/SimpleWallet/PasswordContainer.cpp"
#include "src/SimpleWallet/PasswordContainer.h"
#include "src/SimpleWallet/SimpleWallet.cpp"
#include "src/SimpleWallet/SimpleWallet.h"
//==========================================
// 25th src Folder System
//==========================================
#include "src/System/Context.h"
#include "src/System/ContextGroup.cpp"
#include "src/System/ContextGroup.h"
#include "src/System/ContextGroupTimeout.cpp"
#include "src/System/ContextGroupTimeout.h"
#include "src/System/Event.cpp"
#include "src/System/Event.h"
#include "src/System/EventLock.cpp"
#include "src/System/EventLock.h"
#include "src/System/InterruptedException.cpp"
#include "src/System/InterruptedException.h"
#include "src/System/Ipv4Address.cpp"
#include "src/System/Ipv4Address.h"
#include "src/System/OperationTimeout.h"
#include "src/System/RemoteContext.h"
#include "src/System/RemoteEventLock.cpp"
#include "src/System/RemoteEventLock.h"
#include "src/System/TcpStream.cpp"
#include "src/System/TcpStream.h"
//==========================================
// 26th src Folder Transfers
//==========================================
#include "src/Transfers/BlockchainSynchronizer.cpp"
#include "src/Transfers/BlockchainSynchronizer.h"
#include "src/Transfers/CommonTypes.h"
#include "src/Transfers/IBlockchainSynchronizer.h"
#include "src/Transfers/IObservableImpl.h"
#include "src/Transfers/SynchronizationState.cpp"
#include "src/Transfers/SynchronizationState.h"
#include "src/Transfers/TransfersConsumer.cpp"
#include "src/Transfers/TransfersConsumer.h"
#include "src/Transfers/TransfersContainer.cpp"
#include "src/Transfers/TransfersContainer.h"
#include "src/Transfers/TransfersSubscription.cpp"
#include "src/Transfers/TransfersSubscription.h"
#include "src/Transfers/TransfersSynchronizer.cpp"
#include "src/Transfers/TransfersSynchronizer.h"
#include "src/Transfers/TypeHelpers.h"
//==========================================
// 27th src Folder Wallet
//==========================================
#include "src/Wallet/IFusionManager.h"
#include "src/Wallet/LegacyKeysImporter.cpp"
#include "src/Wallet/LegacyKeysImporter.h"
#include "src/Wallet/WalletAsyncContextCounter.cpp"
#include "src/Wallet/WalletAsyncContextCounter.h"
#include "src/Wallet/WalletErrors.cpp"
#include "src/Wallet/WalletErrors.h"
#include "src/Wallet/WalletGreen.cpp"
#include "src/Wallet/WalletGreen.h"
#include "src/Wallet/WalletIndices.h"
#include "src/Wallet/WalletRpcServer.cpp"
#include "src/Wallet/WalletRpcServer.h"
#include "src/Wallet/WalletRpcServerCommandsDefinitions.h"
#include "src/Wallet/WalletRpcServerErrorCodes.h"
#include "src/Wallet/WalletSerialization.cpp"
#include "src/Wallet/WalletSerialization.h"
#include "src/Wallet/WalletUtils.cpp"
#include "src/Wallet/WalletUtils.h"
//==========================================
// 28th src Folder WalletLegacy
//==========================================
#include "src/WalletLegacy/KeysStorage.cpp"
#include "src/WalletLegacy/KeysStorage.h"
#include "src/WalletLegacy/WalletDepositInfo.h"
#include "src/WalletLegacy/WalletHelper.cpp"
#include "src/WalletLegacy/WalletHelper.h"
#include "src/WalletLegacy/WalletLegacy.cpp"
#include "src/WalletLegacy/WalletLegacy.h"
#include "src/WalletLegacy/WalletLegacyEvent.h"
#include "src/WalletLegacy/WalletLegacySerialization.cpp"
#include "src/WalletLegacy/WalletLegacySerialization.h"
#include "src/WalletLegacy/WalletLegacySerializer.cpp"
#include "src/WalletLegacy/WalletLegacySerializer.h"
#include "src/WalletLegacy/WalletRequest.h"
#include "src/WalletLegacy/WalletSendTransactionContext.h"
#include "src/WalletLegacy/WalletTransactionSender.cpp"
#include "src/WalletLegacy/WalletTransactionSender.h"
#include "src/WalletLegacy/WalletUnconfirmedTransactions.cpp"
#include "src/WalletLegacy/WalletUnconfirmedTransactions.h"
#include "src/WalletLegacy/WalletUserTransactionsCache.cpp"
#include "src/WalletLegacy/WalletUserTransactionsCache.h"
#include "src/WalletLegacy/WalletUtils.h"

#define IS_WHITE_SPACE(c) ((c==' ') || (c=='\t') || (c=='\r') || (c=='\n'))

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

