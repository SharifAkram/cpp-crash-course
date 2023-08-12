// A program that prints a greeting that depends on the
// Crypto selected

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

	switch (meme_coin) {
	case Crypto::Bitcoin: {
		printf("This is not a security, but a commodity.\n");
	}	break;
	case Crypto::Ethereum: {
		printf("Ethereum is ERC-20.\n");
	}	break;
	case Crypto::Solana: {
		printf("Not completely decentralized.\n");
	}	break;
	case Crypto::Pendle: {
		printf("A token standard for yield generating circumstances.\n");
	}	break;
	case Crypto::Dogecoin: {
		printf("Pioneer of the memecoin.\n");
	}	break;
	case Crypto::Polkadot: {
		printf("Protocol that connects blockchains.\n");
	}	break;
	case Crypto::Fantom: {
		printf("Low transaction fees and fast transfer speed.\n");
	}	break;
	default: {
			printf("Error: unknown crypto!\n");
		}
	}
}
