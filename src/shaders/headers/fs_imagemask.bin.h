static const uint8_t fs_imagemask_glsl[674] =
{
	0x46, 0x53, 0x48, 0x03, 0x6f, 0x1e, 0x3e, 0x3c, 0x02, 0x00, 0x0a, 0x75, 0x5f, 0x75, 0x6e, 0x69, // FSH.o.><...u_uni
	0x66, 0x6f, 0x72, 0x6d, 0x73, 0x07, 0x37, 0x00, 0x00, 0x37, 0x00, 0x0a, 0x75, 0x5f, 0x74, 0x65, // forms.7..7..u_te
	0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x71, 0x02, 0x00, 0x00, // xColor......q...
	0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, // varying highp ve
	0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, // c2 v_texcoord0;.
	0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x75, // uniform vec4 u_u
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x35, 0x35, 0x5d, 0x3b, 0x0a, 0x75, 0x6e, 0x69, // niforms[55];.uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, // form sampler2D u
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, // _texColor;.void 
	0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, // main ().{.  lowp
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, //  vec4 color_1;. 
	0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, //  lowp vec4 tmpva
	0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, // r_2;.  tmpvar_2 
	0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x74, // = texture2D (u_t
	0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // exColor, v_texco
	0x6f, 0x72, 0x64, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, // ord0);.  color_1
	0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x69, //  = tmpvar_2;.  i
	0x66, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x20, 0x3c, // f ((tmpvar_2.x <
	0x20, 0x30, 0x2e, 0x30, 0x32, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x68, 0x69, //  0.02)) {.    hi
	0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ghp vec4 tmpvar_
	0x33, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, // 3;.    tmpvar_3.
	0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, // w = 1.0;.    tmp
	0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x75, 0x5f, // var_3.xyz = ((u_
	0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x32, 0x35, 0x5d, 0x2e, 0x78, 0x79, 0x7a, // uniforms[25].xyz
	0x20, 0x2a, 0x20, 0x28, 0x31, 0x2e, 0x30, 0x20, 0x2d, 0x20, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, //  * (1.0 - u_unif
	0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x32, 0x35, 0x5d, 0x2e, 0x77, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, // orms[25].w)) * 0
	0x2e, 0x36, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, // .6);.    color_1
	0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x7d, //  = tmpvar_3;.  }
	0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, //  else {.    if (
	0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x31, // (color_1.w > 0.1
	0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // )) {.      highp
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, //  vec4 tmpvar_4;.
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x78, //       tmpvar_4.x
	0x79, 0x7a, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, // yz = u_uniforms[
	0x32, 0x35, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x74, // 25].xyz;.      t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x33, // mpvar_4.w = (0.3
	0x20, 0x2b, 0x20, 0x28, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x32, //  + (u_uniforms[2
	0x35, 0x5d, 0x2e, 0x77, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x37, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // 5].w * 0.7));.  
	0x20, 0x20, 0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x74, 0x6d, //     color_1 = tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, // pvar_4;.    };. 
	0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, //  };.  gl_FragCol
	0x6f, 0x72, 0x20, 0x3d, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x7d, 0x0a, // or = color_1;.}.
	0x0a, 0x00,                                                                                     // ..
};
static const uint8_t fs_imagemask_dx9[478] =
{
	0x46, 0x53, 0x48, 0x03, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x75, 0x6e, 0x69, // FSH.o.><...u_uni
	0x66, 0x6f, 0x72, 0x6d, 0x73, 0x15, 0x37, 0x00, 0x00, 0x1a, 0x00, 0xc0, 0x01, 0x00, 0x03, 0xff, // forms.7.........
	0xff, 0xfe, 0xff, 0x2e, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, // .....CTAB.......
	0x00, 0x00, 0x03, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, // ................
	0x00, 0x7c, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, // .|...D..........
	0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .P.......`......
	0x00, 0x1a, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x74, // .....l.......u_t
	0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0xab, 0x04, 0x00, 0x0c, 0x00, 0x01, 0x00, 0x01, // exColor.........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, // .........u_unifo
	0x72, 0x6d, 0x73, 0x00, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x37, 0x00, 0x00, // rms..........7..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, // .....ps_3_0.Micr
	0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, // osoft (R) HLSL S
	0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, // hader Compiler 9
	0x2e, 0x32, 0x39, 0x2e, 0x39, 0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0x51, 0x00, 0x00, // .29.952.3111.Q..
	0x05, 0x1a, 0x00, 0x0f, 0xa0, 0x0a, 0xd7, 0xa3, 0xbc, 0x00, 0x00, 0x80, 0x3f, 0x9a, 0x99, 0x19, // ............?...
	0x3f, 0xcd, 0xcc, 0xcc, 0x3d, 0x51, 0x00, 0x00, 0x05, 0x1b, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x80, // ?...=Q..........
	0x3f, 0x33, 0x33, 0x33, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x9a, 0x99, 0x99, 0x3e, 0x1f, 0x00, 0x00, // ?333?.......>...
	0x02, 0x05, 0x00, 0x00, 0x80, 0x00, 0x00, 0x03, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x90, 0x00, 0x08, 0x0f, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x0f, 0x80, 0x19, 0x00, 0xe4, // ................
	0xa0, 0x02, 0x00, 0x00, 0x03, 0x01, 0x00, 0x01, 0x80, 0x00, 0x00, 0xff, 0x81, 0x1a, 0x00, 0x55, // ...............U
	0xa0, 0x05, 0x00, 0x00, 0x03, 0x01, 0x00, 0x07, 0x80, 0x01, 0x00, 0x00, 0x80, 0x19, 0x00, 0xe4, // ................
	0xa0, 0x05, 0x00, 0x00, 0x03, 0x01, 0x00, 0x07, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x1a, 0x00, 0xaa, // ................
	0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x1b, 0x00, 0x40, // ...............@
	0xa0, 0x1b, 0x00, 0xea, 0xa0, 0x42, 0x00, 0x00, 0x03, 0x02, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, // .....B..........
	0x90, 0x00, 0x08, 0xe4, 0xa0, 0x02, 0x00, 0x00, 0x03, 0x03, 0x00, 0x01, 0x80, 0x02, 0x00, 0xff, // ................
	0x81, 0x1a, 0x00, 0xff, 0xa0, 0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x03, 0x00, 0x00, // .....X..........
	0x80, 0x02, 0x00, 0xe4, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x01, // ................
	0x80, 0x02, 0x00, 0x00, 0x80, 0x1a, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x01, 0x00, 0x08, // ................
	0x80, 0x1a, 0x00, 0x55, 0xa0, 0x58, 0x00, 0x00, 0x04, 0x00, 0x08, 0x0f, 0x80, 0x02, 0x00, 0x00, // ...U.X..........
	0x80, 0x00, 0x00, 0xe4, 0x80, 0x01, 0x00, 0xe4, 0x80, 0xff, 0xff, 0x00, 0x00, 0x00,             // ..............
};
static const uint8_t fs_imagemask_dx11[1609] =
{
	0x46, 0x53, 0x48, 0x03, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x75, 0x6e, 0x69, // FSH.o.><...u_uni
	0x66, 0x6f, 0x72, 0x6d, 0x73, 0x15, 0x37, 0x30, 0x0a, 0x37, 0x00, 0x28, 0x06, 0x44, 0x58, 0x42, // forms.70.7.(.DXB
	0x43, 0xdf, 0x51, 0x26, 0x59, 0x0d, 0x3e, 0xe1, 0x72, 0x0b, 0xe4, 0x69, 0x69, 0x19, 0x67, 0x37, // C.Q&Y.>.r..ii.g7
	0x46, 0x01, 0x00, 0x00, 0x00, 0x28, 0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, // F....(.......4..
	0x00, 0x5c, 0x03, 0x00, 0x00, 0xb4, 0x03, 0x00, 0x00, 0xe8, 0x03, 0x00, 0x00, 0xac, 0x05, 0x00, // ................
	0x00, 0x52, 0x44, 0x45, 0x46, 0x20, 0x03, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, // .RDEF ..........
	0x00, 0x03, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x04, 0xff, 0xff, 0x00, 0x91, 0x00, // ................
	0x00, 0xec, 0x02, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....|..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x97, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, // ................
	0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x0d, 0x00, 0x00, 0x00, 0xb2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x75, // .....u_texColoru
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, // _texColorampler.
	0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, // u_texColoru_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, // olorexture.$Glob
	0x61, 0x6c, 0x73, 0x00, 0xab, 0xb2, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, // als.............
	0x00, 0xa0, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x02, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x02, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // .....(..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x02, 0x00, // .............4..
	0x00, 0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x02, 0x00, // . ...@.......<..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4c, 0x02, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, // .....L...`...@..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x02, 0x00, // .....<.......V..
	0x00, 0xa0, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x02, 0x00, // .....@.......<..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5d, 0x02, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, // .....].......@..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x02, 0x00, // .....<.......g..
	0x00, 0x20, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x02, 0x00, // . ...@.......<..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0x02, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, // .....r...`...@..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x02, 0x00, // .....<..........
	0x00, 0xa0, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x02, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x02, 0x00, 0x00, 0xa0, 0x09, 0x00, 0x00, 0x40, 0x00, 0x00, // .............@..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x02, 0x00, // .....<..........
	0x00, 0xe0, 0x09, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x02, 0x00, // .....@.......<..
	0x00, 0x00, 0x00, 0x00, 0x00, 0xb4, 0x02, 0x00, 0x00, 0x20, 0x0a, 0x00, 0x00, 0x04, 0x00, 0x00, // ......... ......
	0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x02, 0x00, // ................
	0x00, 0x30, 0x0a, 0x00, 0x00, 0x70, 0x03, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xdc, 0x02, 0x00, // .0...p..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x00, // .....u_viewRect.
	0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x00, 0x75, 0x5f, 0x76, // .u_viewTexel.u_v
	0x69, 0x65, 0x77, 0x00, 0xab, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, // iew.............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x00, 0x75, // .....u_invView.u
	0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x00, // _proj.u_invProj.
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, // u_viewProj.u_inv
	0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, // ViewProj.u_model
	0x00, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......... ......
	0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x00, 0x75, 0x5f, 0x6d, // .u_modelView.u_m
	0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x75, 0x5f, 0x61, // odelViewProj.u_a
	0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x00, 0xab, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0x01, // lphaRef.........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, // .........u_unifo
	0x72, 0x6d, 0x73, 0x00, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x37, 0x00, 0x00, // rms..........7..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, // .....Microsoft (
	0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, // R) HLSL Shader C
	0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, 0x32, 0x39, 0x2e, 0x39, 0x35, 0x32, // ompiler 9.29.952
	0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0xab, 0xab, 0xab, 0x49, 0x53, 0x47, 0x4e, 0x50, 0x00, 0x00, // .3111....ISGNP..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........8......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, // ................
	0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .D..............
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, // .........SV_POSI
	0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, // TION.TEXCOORD...
	0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // .OSGN,..........
	0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // . ..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, // .........SV_TARG
	0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0xbc, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, // ET...SHDR....@..
	0x00, 0x6f, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .o...Y...F. ....
	0x00, 0xbd, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, // .....Z....`.....
	0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, // .X....p......UU.
	0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, // .b...2.......e..
	0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x04, 0x00, 0x00, // .. ......h......
	0x00, 0x00, 0x00, 0x00, 0x09, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x80, 0x20, // .............:. 
	0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, // .A............@.
	0x00, 0x00, 0x00, 0x80, 0x3f, 0x38, 0x00, 0x00, 0x08, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ....?8...r......
	0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, // .........F. ....
	0x00, 0xbc, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .....8...r......
	0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x9a, 0x99, 0x19, // .F........@.....
	0x3f, 0x9a, 0x99, 0x19, 0x3f, 0x9a, 0x99, 0x19, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, // ?...?...?....2..
	0x10, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .........F. ....
	0x00, 0xbc, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, // ......@.....?...
	0x3f, 0x00, 0x00, 0x80, 0x3f, 0x33, 0x33, 0x33, 0x3f, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, // ?...?333?.@.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9a, 0x99, 0x99, 0x3e, 0x45, 0x00, 0x00, // ............>E..
	0x09, 0xf2, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, // .........F......
	0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, // .F~.......`.....
	0x00, 0x31, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, // .1............@.
	0x00, 0xcd, 0xcc, 0xcc, 0x3d, 0x3a, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, // ....=:.......7..
	0x09, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x02, 0x00, 0x00, // .F.......F......
	0x00, 0x31, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, // .1..............
	0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x0a, 0xd7, 0xa3, 0x3c, 0x36, 0x00, 0x00, // ......@.....<6..
	0x05, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, // ..........@.....
	0x3f, 0x37, 0x00, 0x00, 0x09, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, // ?7.... .........
	0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, // .....F.......F..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x53, 0x54, 0x41, 0x54, 0x74, 0x00, 0x00, // .....>...STATt..
	0x00, 0x0b, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x0d,                                           // .........
};
