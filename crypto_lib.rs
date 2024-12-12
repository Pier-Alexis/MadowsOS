
use aes::Aes128;
use block_modes::{BlockMode, Cbc};
use block_modes::block_padding::Pkcs7;
use hex_literal::hex;

type Aes128Cbc = Cbc<Aes128, Pkcs7>;

pub fn encrypt(data: &[u8], key: &[u8], iv: &[u8]) -> Vec<u8> {
    let cipher = Aes128Cbc::new_var(key, iv).unwrap();
    cipher.encrypt_vec(data)
}
