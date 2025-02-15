#pragma once
/**
 * Chain params constants for each tracked chain.
 * @generated by contrib/devtools/chainparams/generate_chainparams_constants.py
 */

#include <primitives/blockhash.h>
#include <uint256.h>

namespace ChainParamsConstants {
    const BlockHash MAINNET_DEFAULT_ASSUME_VALID = BlockHash::fromHex("000000000000000002c9dbda0c5bc873e6cc95f867cd12f534db66b587c90a7c");
    const uint256 MAINNET_MINIMUM_CHAIN_WORK = uint256S("000000000000000000000000000000000000000001e244b0a997b346234cedc2");

    const BlockHash TESTNET_DEFAULT_ASSUME_VALID = BlockHash::fromHex("00000000000001e9bb417b00b0bb36d0139251ce1a75f52eb5f45ca483ed3138");
    const uint256 TESTNET_MINIMUM_CHAIN_WORK = uint256S("0000000000000000000000000000000000000000000000e4331bb1d546cee25a");

    const BlockHash TESTNET4_DEFAULT_ASSUME_VALID = BlockHash::fromHex("0000000000067a1ebd849a9256638eec6b04bc9dd294cfa5177ff4d668f1bf2b");
    const uint256 TESTNET4_MINIMUM_CHAIN_WORK = uint256S("00000000000000000000000000000000000000000000000001db60c6f5159635");

    // Scalenet re-organizes above height 10,000 - use block 9,999 hash here.
    const BlockHash SCALENET_DEFAULT_ASSUME_VALID = BlockHash::fromHex("000000007fb3362740efd1435aa414f54171993483799782f83c61bc7bf1b1be");
    const uint256 SCALENET_MINIMUM_CHAIN_WORK = uint256S("00000000000000000000000000000000000000000000000003a54dce8032552f");

    const BlockHash CHIPNET_DEFAULT_ASSUME_VALID = BlockHash::fromHex("000000001d9091b576ffe2bd2d8ddc7daf92689d6584d2dbf2518eb8f0ffbccd");
    const uint256 CHIPNET_MINIMUM_CHAIN_WORK = uint256S("0000000000000000000000000000000000000000000000000163a28ad0be3b6b");
} // namespace ChainParamsConstants
