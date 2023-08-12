// An enumeration class containing different cryptocurrencies

#include <cstdio>

enum class Crypto {
	Bitcoin, 
	Ethereum, 
	Solana, 
	Pendle,
	Dogecoin, 
	Polkadot, 
	Fantom
};

int main() {
	Crypto meme_coin = Crypto::Dogecoin;
}