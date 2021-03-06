#pragma once
#include "CListBoxComboSub.h"

class CListBoxComboSub;

class CEditComboSub : public CEdit
{
	DECLARE_DYNAMIC(CEditComboSub)

public:
	CEditComboSub();
	virtual ~CEditComboSub();

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
protected:
	CListBoxComboSub* m_pListBox;
public:
	void Init(CListBoxComboSub* pListBox);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	CButton* SetButton(CButton* pButton);
protected:
	CButton* m_pButton;

};


