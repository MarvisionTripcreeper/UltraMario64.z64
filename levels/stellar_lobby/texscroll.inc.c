void scroll_gfx_mat_stellar_lobby_dl_Star_Floor_layer1() {
	Gfx *mat = segmented_to_virtual(mat_stellar_lobby_dl_Star_Floor_layer1);

	shift_s(mat, 16, PACK_TILESIZE(0, 1));

};

void scroll_stellar_lobby() {
	scroll_gfx_mat_stellar_lobby_dl_Star_Floor_layer1();
};
