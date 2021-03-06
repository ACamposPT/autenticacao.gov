/* soapBasicHttpBinding_USCORECCMovelSignatureProxy.cpp
   Generated by gSOAP 2.8.96 for CCMovelDigitalSignature.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapBasicHttpBinding_USCORECCMovelSignatureProxy.h"

BasicHttpBinding_USCORECCMovelSignatureProxy::BasicHttpBinding_USCORECCMovelSignatureProxy()
{	this->soap = soap_new();
	this->soap_own = true;
	BasicHttpBinding_USCORECCMovelSignatureProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

BasicHttpBinding_USCORECCMovelSignatureProxy::BasicHttpBinding_USCORECCMovelSignatureProxy(const BasicHttpBinding_USCORECCMovelSignatureProxy& rhs)
{	this->soap = rhs.soap;
	this->soap_own = false;
	this->soap_endpoint = rhs.soap_endpoint;
}

BasicHttpBinding_USCORECCMovelSignatureProxy::BasicHttpBinding_USCORECCMovelSignatureProxy(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	BasicHttpBinding_USCORECCMovelSignatureProxy_init(_soap->imode, _soap->omode);
}

BasicHttpBinding_USCORECCMovelSignatureProxy::BasicHttpBinding_USCORECCMovelSignatureProxy(struct soap *_soap, const char *soap_endpoint_url)
{	this->soap = _soap;
	this->soap_own = false;
	BasicHttpBinding_USCORECCMovelSignatureProxy_init(_soap->imode, _soap->omode);
	soap_endpoint = soap_endpoint_url;
}

BasicHttpBinding_USCORECCMovelSignatureProxy::BasicHttpBinding_USCORECCMovelSignatureProxy(const char *soap_endpoint_url)
{	this->soap = soap_new();
	this->soap_own = true;
	BasicHttpBinding_USCORECCMovelSignatureProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = soap_endpoint_url;
}

BasicHttpBinding_USCORECCMovelSignatureProxy::BasicHttpBinding_USCORECCMovelSignatureProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	BasicHttpBinding_USCORECCMovelSignatureProxy_init(iomode, iomode);
}

BasicHttpBinding_USCORECCMovelSignatureProxy::BasicHttpBinding_USCORECCMovelSignatureProxy(const char *soap_endpoint_url, soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	BasicHttpBinding_USCORECCMovelSignatureProxy_init(iomode, iomode);
	soap_endpoint = soap_endpoint_url;
}

BasicHttpBinding_USCORECCMovelSignatureProxy::BasicHttpBinding_USCORECCMovelSignatureProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	BasicHttpBinding_USCORECCMovelSignatureProxy_init(imode, omode);
}

BasicHttpBinding_USCORECCMovelSignatureProxy::~BasicHttpBinding_USCORECCMovelSignatureProxy()
{	if (this->soap_own)
	{	this->destroy();
		soap_free(this->soap);
	}
}

void BasicHttpBinding_USCORECCMovelSignatureProxy::BasicHttpBinding_USCORECCMovelSignatureProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] = {
        { "SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://schemas.xmlsoap.org/soap/envelope/", NULL },
        { "SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://schemas.xmlsoap.org/soap/encoding/", NULL },
        { "xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL },
        { "xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL },
        { "ns3", "http://schemas.datacontract.org/2004/07/Ama.Structures.CCMovelSignature", NULL, NULL },
        { "ns2", "http://Ama.Authentication.Service/", NULL, NULL },
        { "c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL },
        { "ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL },
        { "saml1", "urn:oasis:names:tc:SAML:1.0:assertion", NULL, NULL },
        { "saml2", "urn:oasis:names:tc:SAML:2.0:assertion", NULL, NULL },
        { "wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL },
        { "xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL },
        { "wsc", "http://docs.oasis-open.org/ws-sx/ws-secureconversation/200512", "http://schemas.xmlsoap.org/ws/2005/02/sc", NULL },
        { "wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL },
        { NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this->soap, namespaces);
}

BasicHttpBinding_USCORECCMovelSignatureProxy *BasicHttpBinding_USCORECCMovelSignatureProxy::copy()
{	BasicHttpBinding_USCORECCMovelSignatureProxy *dup = SOAP_NEW_UNMANAGED(BasicHttpBinding_USCORECCMovelSignatureProxy);
	if (dup)
	{	soap_done(dup->soap);
		soap_copy_context(dup->soap, this->soap);
	}
	return dup;
}

BasicHttpBinding_USCORECCMovelSignatureProxy& BasicHttpBinding_USCORECCMovelSignatureProxy::operator=(const BasicHttpBinding_USCORECCMovelSignatureProxy& rhs)
{	if (this->soap != rhs.soap)
	{	if (this->soap_own)
			soap_free(this->soap);
		this->soap = rhs.soap;
		this->soap_own = false;
		this->soap_endpoint = rhs.soap_endpoint;
	}
	return *this;
}

void BasicHttpBinding_USCORECCMovelSignatureProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void BasicHttpBinding_USCORECCMovelSignatureProxy::reset()
{	this->destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	BasicHttpBinding_USCORECCMovelSignatureProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void BasicHttpBinding_USCORECCMovelSignatureProxy::soap_noheader()
{	this->soap->header = NULL;
}

void BasicHttpBinding_USCORECCMovelSignatureProxy::soap_header(struct _wsse__Security *wsse__Security)
{
	::soap_header(this->soap);
	this->soap->header->wsse__Security = wsse__Security;
}

::SOAP_ENV__Header *BasicHttpBinding_USCORECCMovelSignatureProxy::soap_header()
{	return this->soap->header;
}

::SOAP_ENV__Fault *BasicHttpBinding_USCORECCMovelSignatureProxy::soap_fault()
{	return this->soap->fault;
}

const char *BasicHttpBinding_USCORECCMovelSignatureProxy::soap_fault_subcode()
{	return ::soap_fault_subcode(this->soap);
}

const char *BasicHttpBinding_USCORECCMovelSignatureProxy::soap_fault_string()
{	return ::soap_fault_string(this->soap);
}

const char *BasicHttpBinding_USCORECCMovelSignatureProxy::soap_fault_detail()
{	return ::soap_fault_detail(this->soap);
}

int BasicHttpBinding_USCORECCMovelSignatureProxy::soap_close_socket()
{	return ::soap_closesock(this->soap);
}

int BasicHttpBinding_USCORECCMovelSignatureProxy::soap_force_close_socket()
{	return ::soap_force_closesock(this->soap);
}

void BasicHttpBinding_USCORECCMovelSignatureProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void BasicHttpBinding_USCORECCMovelSignatureProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *BasicHttpBinding_USCORECCMovelSignatureProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int BasicHttpBinding_USCORECCMovelSignatureProxy::send_CCMovelSign(const char *soap_endpoint_url, const char *soap_action, _ns2__CCMovelSign *ns2__CCMovelSign)
{
	struct __ns2__CCMovelSign soap_tmp___ns2__CCMovelSign;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://cmd.autenticacao.gov.pt/Ama.Authentication.Frontend/CCMovelDigitalSignature.svc";
	if (soap_action == NULL)
		soap_action = "http://Ama.Authentication.Service/CCMovelSignature/CCMovelSign";
	soap_tmp___ns2__CCMovelSign.ns2__CCMovelSign = ns2__CCMovelSign;
	soap_begin(soap);
	soap_set_version(soap, 1); /* use SOAP1.1 */
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns2__CCMovelSign(soap, &soap_tmp___ns2__CCMovelSign);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns2__CCMovelSign(soap, &soap_tmp___ns2__CCMovelSign, "-ns2:CCMovelSign", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns2__CCMovelSign(soap, &soap_tmp___ns2__CCMovelSign, "-ns2:CCMovelSign", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int BasicHttpBinding_USCORECCMovelSignatureProxy::recv_CCMovelSign(_ns2__CCMovelSignResponse &ns2__CCMovelSignResponse)
{
	ns2__CCMovelSignResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns2__CCMovelSignResponse.soap_get(soap, "ns2:CCMovelSignResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int BasicHttpBinding_USCORECCMovelSignatureProxy::send_GetCertificate(const char *soap_endpoint_url, const char *soap_action, _ns2__GetCertificate *ns2__GetCertificate)
{
	struct __ns2__GetCertificate soap_tmp___ns2__GetCertificate;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://cmd.autenticacao.gov.pt/Ama.Authentication.Frontend/CCMovelDigitalSignature.svc";
	if (soap_action == NULL)
		soap_action = "http://Ama.Authentication.Service/CCMovelSignature/GetCertificate";
	soap_tmp___ns2__GetCertificate.ns2__GetCertificate = ns2__GetCertificate;
	soap_begin(soap);
	soap_set_version(soap, 1); /* use SOAP1.1 */
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns2__GetCertificate(soap, &soap_tmp___ns2__GetCertificate);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns2__GetCertificate(soap, &soap_tmp___ns2__GetCertificate, "-ns2:GetCertificate", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns2__GetCertificate(soap, &soap_tmp___ns2__GetCertificate, "-ns2:GetCertificate", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int BasicHttpBinding_USCORECCMovelSignatureProxy::recv_GetCertificate(_ns2__GetCertificateResponse &ns2__GetCertificateResponse)
{
	ns2__GetCertificateResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns2__GetCertificateResponse.soap_get(soap, "ns2:GetCertificateResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int BasicHttpBinding_USCORECCMovelSignatureProxy::send_ValidateOtp(const char *soap_endpoint_url, const char *soap_action, _ns2__ValidateOtp *ns2__ValidateOtp)
{
	struct __ns2__ValidateOtp soap_tmp___ns2__ValidateOtp;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://cmd.autenticacao.gov.pt/Ama.Authentication.Frontend/CCMovelDigitalSignature.svc";
	if (soap_action == NULL)
		soap_action = "http://Ama.Authentication.Service/CCMovelSignature/ValidateOtp";
	soap_tmp___ns2__ValidateOtp.ns2__ValidateOtp = ns2__ValidateOtp;
	soap_begin(soap);
	soap_set_version(soap, 1); /* use SOAP1.1 */
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns2__ValidateOtp(soap, &soap_tmp___ns2__ValidateOtp);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns2__ValidateOtp(soap, &soap_tmp___ns2__ValidateOtp, "-ns2:ValidateOtp", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns2__ValidateOtp(soap, &soap_tmp___ns2__ValidateOtp, "-ns2:ValidateOtp", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int BasicHttpBinding_USCORECCMovelSignatureProxy::recv_ValidateOtp(_ns2__ValidateOtpResponse &ns2__ValidateOtpResponse)
{
	ns2__ValidateOtpResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns2__ValidateOtpResponse.soap_get(soap, "ns2:ValidateOtpResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int BasicHttpBinding_USCORECCMovelSignatureProxy::send_CCMovelMultipleSign(const char *soap_endpoint_url, const char *soap_action, _ns2__CCMovelMultipleSign *ns2__CCMovelMultipleSign)
{
	struct __ns2__CCMovelMultipleSign soap_tmp___ns2__CCMovelMultipleSign;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://cmd.autenticacao.gov.pt/Ama.Authentication.Frontend/CCMovelDigitalSignature.svc";
	if (soap_action == NULL)
		soap_action = "http://Ama.Authentication.Service/CCMovelSignature/CCMovelMultipleSign";
	soap_tmp___ns2__CCMovelMultipleSign.ns2__CCMovelMultipleSign = ns2__CCMovelMultipleSign;
	soap_begin(soap);
	soap_set_version(soap, 1); /* use SOAP1.1 */
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns2__CCMovelMultipleSign(soap, &soap_tmp___ns2__CCMovelMultipleSign);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns2__CCMovelMultipleSign(soap, &soap_tmp___ns2__CCMovelMultipleSign, "-ns2:CCMovelMultipleSign", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns2__CCMovelMultipleSign(soap, &soap_tmp___ns2__CCMovelMultipleSign, "-ns2:CCMovelMultipleSign", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int BasicHttpBinding_USCORECCMovelSignatureProxy::recv_CCMovelMultipleSign(_ns2__CCMovelMultipleSignResponse &ns2__CCMovelMultipleSignResponse)
{
	ns2__CCMovelMultipleSignResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns2__CCMovelMultipleSignResponse.soap_get(soap, "ns2:CCMovelMultipleSignResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int BasicHttpBinding_USCORECCMovelSignatureProxy::send_ForceSMS(const char *soap_endpoint_url, const char *soap_action, _ns2__ForceSMS *ns2__ForceSMS)
{
	struct __ns2__ForceSMS soap_tmp___ns2__ForceSMS;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://cmd.autenticacao.gov.pt/Ama.Authentication.Frontend/CCMovelDigitalSignature.svc";
	if (soap_action == NULL)
		soap_action = "http://Ama.Authentication.Service/CCMovelSignature/ForceSMS";
	soap_tmp___ns2__ForceSMS.ns2__ForceSMS = ns2__ForceSMS;
	soap_begin(soap);
	soap_set_version(soap, 1); /* use SOAP1.1 */
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns2__ForceSMS(soap, &soap_tmp___ns2__ForceSMS);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns2__ForceSMS(soap, &soap_tmp___ns2__ForceSMS, "-ns2:ForceSMS", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns2__ForceSMS(soap, &soap_tmp___ns2__ForceSMS, "-ns2:ForceSMS", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int BasicHttpBinding_USCORECCMovelSignatureProxy::recv_ForceSMS(_ns2__ForceSMSResponse &ns2__ForceSMSResponse)
{
	ns2__ForceSMSResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns2__ForceSMSResponse.soap_get(soap, "ns2:ForceSMSResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int BasicHttpBinding_USCORECCMovelSignatureProxy::send_GetCertificateWithPin(const char *soap_endpoint_url, const char *soap_action, _ns2__GetCertificateWithPin *ns2__GetCertificateWithPin)
{
	struct __ns2__GetCertificateWithPin soap_tmp___ns2__GetCertificateWithPin;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://cmd.autenticacao.gov.pt/Ama.Authentication.Frontend/CCMovelDigitalSignature.svc";
	if (soap_action == NULL)
		soap_action = "http://Ama.Authentication.Service/CCMovelSignature/GetCertificateWithPin";
	soap_tmp___ns2__GetCertificateWithPin.ns2__GetCertificateWithPin = ns2__GetCertificateWithPin;
	soap_begin(soap);
	soap_set_version(soap, 1); /* use SOAP1.1 */
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns2__GetCertificateWithPin(soap, &soap_tmp___ns2__GetCertificateWithPin);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns2__GetCertificateWithPin(soap, &soap_tmp___ns2__GetCertificateWithPin, "-ns2:GetCertificateWithPin", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns2__GetCertificateWithPin(soap, &soap_tmp___ns2__GetCertificateWithPin, "-ns2:GetCertificateWithPin", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int BasicHttpBinding_USCORECCMovelSignatureProxy::recv_GetCertificateWithPin(_ns2__GetCertificateWithPinResponse &ns2__GetCertificateWithPinResponse)
{
	ns2__GetCertificateWithPinResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns2__GetCertificateWithPinResponse.soap_get(soap, "ns2:GetCertificateWithPinResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
