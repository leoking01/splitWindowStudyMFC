#pragma once



// test ������ͼ

class test : public CFormView
{
	DECLARE_DYNCREATE(test)

protected:
	test();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~test();

public:
	enum { IDD = IDD_DIALOG1 };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};


