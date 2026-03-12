#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "DNSManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


DNSManager::DNSManager()
{

}

DNSManager::~DNSManager()
{

}

static gboolean __DNSManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __DNSManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__DNSManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool addDnsDomainProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	
	void(* handler)(Error, void* ) = reinterpret_cast<void(*)(Error, void* )> (voidHandler);
	JsonNode* pJson;
	char * data = p_chunk.memory;

	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));


		handler(error, userData);
		return true;



	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		handler(error, userData);
		return false;
	}
}

static bool addDnsDomainHelper(char * accessToken,
	std::string domain, std::string ip, 
	
	void(* handler)(Error, void* ) , void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: multipart/form-data");
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/dns");
	int pos;


	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(DNSManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = addDnsDomainProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (DNSManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), addDnsDomainProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __DNSManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool DNSManager::addDnsDomainAsync(char * accessToken,
	std::string domain, std::string ip, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return addDnsDomainHelper(accessToken,
	domain, ip, 
	handler, userData, true);
}

bool DNSManager::addDnsDomainSync(char * accessToken,
	std::string domain, std::string ip, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return addDnsDomainHelper(accessToken,
	domain, ip, 
	handler, userData, false);
}

static bool addDnsRecordProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	
	void(* handler)(Error, void* ) = reinterpret_cast<void(*)(Error, void* )> (voidHandler);
	JsonNode* pJson;
	char * data = p_chunk.memory;

	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));


		handler(error, userData);
		return true;



	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		handler(error, userData);
		return false;
	}
}

static bool addDnsRecordHelper(char * accessToken,
	std::string id, std::string name, DnsRecordType type, std::string content, int ttl, int prio, 
	
	void(* handler)(Error, void* ) , void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: multipart/form-data");
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/dns/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(DNSManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = addDnsRecordProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (DNSManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), addDnsRecordProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __DNSManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool DNSManager::addDnsRecordAsync(char * accessToken,
	std::string id, std::string name, DnsRecordType type, std::string content, int ttl, int prio, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return addDnsRecordHelper(accessToken,
	id, name, type, content, ttl, prio, 
	handler, userData, true);
}

bool DNSManager::addDnsRecordSync(char * accessToken,
	std::string id, std::string name, DnsRecordType type, std::string content, int ttl, int prio, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return addDnsRecordHelper(accessToken,
	id, name, type, content, ttl, prio, 
	handler, userData, false);
}

static bool deleteDnsDomainProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	
	void(* handler)(Error, void* ) = reinterpret_cast<void(*)(Error, void* )> (voidHandler);
	JsonNode* pJson;
	char * data = p_chunk.memory;

	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));


		handler(error, userData);
		return true;



	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		handler(error, userData);
		return false;
	}
}

static bool deleteDnsDomainHelper(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/dns/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("DELETE");

	if(strcmp("PUT", "DELETE") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(DNSManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteDnsDomainProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (DNSManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteDnsDomainProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __DNSManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool DNSManager::deleteDnsDomainAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteDnsDomainHelper(accessToken,
	id, 
	handler, userData, true);
}

bool DNSManager::deleteDnsDomainSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteDnsDomainHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool deleteDnsRecordProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	
	void(* handler)(Error, void* ) = reinterpret_cast<void(*)(Error, void* )> (voidHandler);
	JsonNode* pJson;
	char * data = p_chunk.memory;

	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));


		handler(error, userData);
		return true;



	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		handler(error, userData);
		return false;
	}
}

static bool deleteDnsRecordHelper(char * accessToken,
	int domainId, int recordId, 
	
	void(* handler)(Error, void* ) , void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/dns/{domainId}/{recordId}");
	int pos;

	string s_domainId("{");
	s_domainId.append("domainId");
	s_domainId.append("}");
	pos = url.find(s_domainId);
	url.erase(pos, s_domainId.length());
	url.insert(pos, stringify(&domainId, "int"));
	string s_recordId("{");
	s_recordId.append("recordId");
	s_recordId.append("}");
	pos = url.find(s_recordId);
	url.erase(pos, s_recordId.length());
	url.insert(pos, stringify(&recordId, "int"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("DELETE");

	if(strcmp("PUT", "DELETE") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(DNSManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteDnsRecordProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (DNSManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteDnsRecordProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __DNSManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool DNSManager::deleteDnsRecordAsync(char * accessToken,
	int domainId, int recordId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteDnsRecordHelper(accessToken,
	domainId, recordId, 
	handler, userData, true);
}

bool DNSManager::deleteDnsRecordSync(char * accessToken,
	int domainId, int recordId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteDnsRecordHelper(accessToken,
	domainId, recordId, 
	handler, userData, false);
}

static bool getDnsDomainProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<DnsRecord>, Error, void* )
	= reinterpret_cast<void(*)(std::list<DnsRecord>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<DnsRecord> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			DnsRecord singlemodel;
			singlemodel.fromJson(singlenodestr);
			out.push_front(singlemodel);
			g_free(static_cast<gpointer>(singlenodestr));
			json_node_free(myJson);
		}
		json_array_unref (jsonarray);
		json_node_free(pJson);


	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool getDnsDomainHelper(char * accessToken,
	int id, 
	void(* handler)(std::list<DnsRecord>, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/dns/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "int"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(DNSManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getDnsDomainProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (DNSManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getDnsDomainProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __DNSManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool DNSManager::getDnsDomainAsync(char * accessToken,
	int id, 
	void(* handler)(std::list<DnsRecord>, Error, void* )
	, void* userData)
{
	return getDnsDomainHelper(accessToken,
	id, 
	handler, userData, true);
}

bool DNSManager::getDnsDomainSync(char * accessToken,
	int id, 
	void(* handler)(std::list<DnsRecord>, Error, void* )
	, void* userData)
{
	return getDnsDomainHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getDnsListProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<DnsListItem>, Error, void* )
	= reinterpret_cast<void(*)(std::list<DnsListItem>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<DnsListItem> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			DnsListItem singlemodel;
			singlemodel.fromJson(singlenodestr);
			out.push_front(singlemodel);
			g_free(static_cast<gpointer>(singlenodestr));
			json_node_free(myJson);
		}
		json_array_unref (jsonarray);
		json_node_free(pJson);


	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool getDnsListHelper(char * accessToken,
	
	void(* handler)(std::list<DnsListItem>, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/dns");
	int pos;


	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(DNSManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getDnsListProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (DNSManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getDnsListProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __DNSManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool DNSManager::getDnsListAsync(char * accessToken,
	
	void(* handler)(std::list<DnsListItem>, Error, void* )
	, void* userData)
{
	return getDnsListHelper(accessToken,
	
	handler, userData, true);
}

bool DNSManager::getDnsListSync(char * accessToken,
	
	void(* handler)(std::list<DnsListItem>, Error, void* )
	, void* userData)
{
	return getDnsListHelper(accessToken,
	
	handler, userData, false);
}

static bool updateDnsRecordProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	
	void(* handler)(Error, void* ) = reinterpret_cast<void(*)(Error, void* )> (voidHandler);
	JsonNode* pJson;
	char * data = p_chunk.memory;

	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));


		handler(error, userData);
		return true;



	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		handler(error, userData);
		return false;
	}
}

static bool updateDnsRecordHelper(char * accessToken,
	int domainId, int recordId, std::string name, DnsRecordType type, std::string content, std::string ttl, std::string prio, std::string disabled, std::string ordername, std::string auth, 
	
	void(* handler)(Error, void* ) , void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: multipart/form-data");
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/dns/{domainId}/{recordId}");
	int pos;

	string s_domainId("{");
	s_domainId.append("domainId");
	s_domainId.append("}");
	pos = url.find(s_domainId);
	url.erase(pos, s_domainId.length());
	url.insert(pos, stringify(&domainId, "int"));
	string s_recordId("{");
	s_recordId.append("recordId");
	s_recordId.append("}");
	pos = url.find(s_recordId);
	url.erase(pos, s_recordId.length());
	url.insert(pos, stringify(&recordId, "int"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(DNSManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateDnsRecordProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (DNSManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateDnsRecordProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __DNSManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool DNSManager::updateDnsRecordAsync(char * accessToken,
	int domainId, int recordId, std::string name, DnsRecordType type, std::string content, std::string ttl, std::string prio, std::string disabled, std::string ordername, std::string auth, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateDnsRecordHelper(accessToken,
	domainId, recordId, name, type, content, ttl, prio, disabled, ordername, auth, 
	handler, userData, true);
}

bool DNSManager::updateDnsRecordSync(char * accessToken,
	int domainId, int recordId, std::string name, DnsRecordType type, std::string content, std::string ttl, std::string prio, std::string disabled, std::string ordername, std::string auth, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateDnsRecordHelper(accessToken,
	domainId, recordId, name, type, content, ttl, prio, disabled, ordername, auth, 
	handler, userData, false);
}

