#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_log_entry.h"



static mail_log_entry_t *mail_log_entry_create_internal(
    int *_id,
    char *id,
    char *from,
    char *to,
    char *created,
    int *time,
    char *user,
    char *transtype,
    char *origin,
    char *interface,
    char *subject,
    char *message_id,
    char *sending_zone,
    int *body_size,
    int *seq,
    int *delivered,
    int *code,
    char *recipient,
    char *response,
    char *domain,
    int *locked,
    char *lock_time,
    char *assigned,
    char *queued,
    char *mx_hostname
    ) {
    mail_log_entry_t *mail_log_entry_local_var = malloc(sizeof(mail_log_entry_t));
    if (!mail_log_entry_local_var) {
        return NULL;
    }
    memset(mail_log_entry_local_var, 0, sizeof(mail_log_entry_t));
    mail_log_entry_local_var->_library_owned = 1;
    mail_log_entry_local_var->_id = _id;
    mail_log_entry_local_var->id = id;
    mail_log_entry_local_var->from = from;
    mail_log_entry_local_var->to = to;
    mail_log_entry_local_var->created = created;
    mail_log_entry_local_var->time = time;
    mail_log_entry_local_var->user = user;
    mail_log_entry_local_var->transtype = transtype;
    mail_log_entry_local_var->origin = origin;
    mail_log_entry_local_var->interface = interface;
    mail_log_entry_local_var->subject = subject;
    mail_log_entry_local_var->message_id = message_id;
    mail_log_entry_local_var->sending_zone = sending_zone;
    mail_log_entry_local_var->body_size = body_size;
    mail_log_entry_local_var->seq = seq;
    mail_log_entry_local_var->delivered = delivered;
    mail_log_entry_local_var->code = code;
    mail_log_entry_local_var->recipient = recipient;
    mail_log_entry_local_var->response = response;
    mail_log_entry_local_var->domain = domain;
    mail_log_entry_local_var->locked = locked;
    mail_log_entry_local_var->lock_time = lock_time;
    mail_log_entry_local_var->assigned = assigned;
    mail_log_entry_local_var->queued = queued;
    mail_log_entry_local_var->mx_hostname = mx_hostname;
    return mail_log_entry_local_var;
}

__attribute__((deprecated)) mail_log_entry_t *mail_log_entry_create(
    int *_id,
    char *id,
    char *from,
    char *to,
    char *created,
    int *time,
    char *user,
    char *transtype,
    char *origin,
    char *interface,
    char *subject,
    char *message_id,
    char *sending_zone,
    int *body_size,
    int *seq,
    int *delivered,
    int *code,
    char *recipient,
    char *response,
    char *domain,
    int *locked,
    char *lock_time,
    char *assigned,
    char *queued,
    char *mx_hostname
    ) {
    int *_id_copy = NULL;
    if (_id) {
        _id_copy = malloc(sizeof(int));
        if (_id_copy) *_id_copy = *_id;
    }
    int *time_copy = NULL;
    if (time) {
        time_copy = malloc(sizeof(int));
        if (time_copy) *time_copy = *time;
    }
    int *body_size_copy = NULL;
    if (body_size) {
        body_size_copy = malloc(sizeof(int));
        if (body_size_copy) *body_size_copy = *body_size;
    }
    int *seq_copy = NULL;
    if (seq) {
        seq_copy = malloc(sizeof(int));
        if (seq_copy) *seq_copy = *seq;
    }
    int *delivered_copy = NULL;
    if (delivered) {
        delivered_copy = malloc(sizeof(int));
        if (delivered_copy) *delivered_copy = *delivered;
    }
    int *code_copy = NULL;
    if (code) {
        code_copy = malloc(sizeof(int));
        if (code_copy) *code_copy = *code;
    }
    int *locked_copy = NULL;
    if (locked) {
        locked_copy = malloc(sizeof(int));
        if (locked_copy) *locked_copy = *locked;
    }
    mail_log_entry_t *result = mail_log_entry_create_internal (
        _id_copy,
        id,
        from,
        to,
        created,
        time_copy,
        user,
        transtype,
        origin,
        interface,
        subject,
        message_id,
        sending_zone,
        body_size_copy,
        seq_copy,
        delivered_copy,
        code_copy,
        recipient,
        response,
        domain,
        locked_copy,
        lock_time,
        assigned,
        queued,
        mx_hostname
        );
    if (!result) {
        free(_id_copy);
        free(time_copy);
        free(body_size_copy);
        free(seq_copy);
        free(delivered_copy);
        free(code_copy);
        free(locked_copy);
    }
    return result;
}

void mail_log_entry_free(mail_log_entry_t *mail_log_entry) {
    if(NULL == mail_log_entry){
        return ;
    }
    if(mail_log_entry->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_log_entry_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_log_entry->_id) {
        free(mail_log_entry->_id);
        mail_log_entry->_id = NULL;
    }
    if (mail_log_entry->id) {
        free(mail_log_entry->id);
        mail_log_entry->id = NULL;
    }
    if (mail_log_entry->from) {
        free(mail_log_entry->from);
        mail_log_entry->from = NULL;
    }
    if (mail_log_entry->to) {
        free(mail_log_entry->to);
        mail_log_entry->to = NULL;
    }
    if (mail_log_entry->created) {
        free(mail_log_entry->created);
        mail_log_entry->created = NULL;
    }
    if (mail_log_entry->time) {
        free(mail_log_entry->time);
        mail_log_entry->time = NULL;
    }
    if (mail_log_entry->user) {
        free(mail_log_entry->user);
        mail_log_entry->user = NULL;
    }
    if (mail_log_entry->transtype) {
        free(mail_log_entry->transtype);
        mail_log_entry->transtype = NULL;
    }
    if (mail_log_entry->origin) {
        free(mail_log_entry->origin);
        mail_log_entry->origin = NULL;
    }
    if (mail_log_entry->interface) {
        free(mail_log_entry->interface);
        mail_log_entry->interface = NULL;
    }
    if (mail_log_entry->subject) {
        free(mail_log_entry->subject);
        mail_log_entry->subject = NULL;
    }
    if (mail_log_entry->message_id) {
        free(mail_log_entry->message_id);
        mail_log_entry->message_id = NULL;
    }
    if (mail_log_entry->sending_zone) {
        free(mail_log_entry->sending_zone);
        mail_log_entry->sending_zone = NULL;
    }
    if (mail_log_entry->body_size) {
        free(mail_log_entry->body_size);
        mail_log_entry->body_size = NULL;
    }
    if (mail_log_entry->seq) {
        free(mail_log_entry->seq);
        mail_log_entry->seq = NULL;
    }
    if (mail_log_entry->delivered) {
        free(mail_log_entry->delivered);
        mail_log_entry->delivered = NULL;
    }
    if (mail_log_entry->code) {
        free(mail_log_entry->code);
        mail_log_entry->code = NULL;
    }
    if (mail_log_entry->recipient) {
        free(mail_log_entry->recipient);
        mail_log_entry->recipient = NULL;
    }
    if (mail_log_entry->response) {
        free(mail_log_entry->response);
        mail_log_entry->response = NULL;
    }
    if (mail_log_entry->domain) {
        free(mail_log_entry->domain);
        mail_log_entry->domain = NULL;
    }
    if (mail_log_entry->locked) {
        free(mail_log_entry->locked);
        mail_log_entry->locked = NULL;
    }
    if (mail_log_entry->lock_time) {
        free(mail_log_entry->lock_time);
        mail_log_entry->lock_time = NULL;
    }
    if (mail_log_entry->assigned) {
        free(mail_log_entry->assigned);
        mail_log_entry->assigned = NULL;
    }
    if (mail_log_entry->queued) {
        free(mail_log_entry->queued);
        mail_log_entry->queued = NULL;
    }
    if (mail_log_entry->mx_hostname) {
        free(mail_log_entry->mx_hostname);
        mail_log_entry->mx_hostname = NULL;
    }
    free(mail_log_entry);
}

cJSON *mail_log_entry_convertToJSON(mail_log_entry_t *mail_log_entry) {
    cJSON *item = cJSON_CreateObject();

    // mail_log_entry->_id
    if (!mail_log_entry->_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "_id", *mail_log_entry->_id) == NULL) {
    goto fail; //Numeric
    }


    // mail_log_entry->id
    if (!mail_log_entry->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", mail_log_entry->id) == NULL) {
    goto fail; //String
    }


    // mail_log_entry->from
    if (!mail_log_entry->from) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "from", mail_log_entry->from) == NULL) {
    goto fail; //String
    }


    // mail_log_entry->to
    if (!mail_log_entry->to) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "to", mail_log_entry->to) == NULL) {
    goto fail; //String
    }


    // mail_log_entry->created
    if (!mail_log_entry->created) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created", mail_log_entry->created) == NULL) {
    goto fail; //String
    }


    // mail_log_entry->time
    if (!mail_log_entry->time) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "time", *mail_log_entry->time) == NULL) {
    goto fail; //Numeric
    }


    // mail_log_entry->user
    if (!mail_log_entry->user) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "user", mail_log_entry->user) == NULL) {
    goto fail; //String
    }


    // mail_log_entry->transtype
    if (!mail_log_entry->transtype) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "transtype", mail_log_entry->transtype) == NULL) {
    goto fail; //String
    }


    // mail_log_entry->origin
    if (!mail_log_entry->origin) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "origin", mail_log_entry->origin) == NULL) {
    goto fail; //String
    }


    // mail_log_entry->interface
    if (!mail_log_entry->interface) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "interface", mail_log_entry->interface) == NULL) {
    goto fail; //String
    }


    // mail_log_entry->subject
    if(mail_log_entry->subject) {
    if(cJSON_AddStringToObject(item, "subject", mail_log_entry->subject) == NULL) {
    goto fail; //String
    }
    }


    // mail_log_entry->message_id
    if(mail_log_entry->message_id) {
    if(cJSON_AddStringToObject(item, "messageId", mail_log_entry->message_id) == NULL) {
    goto fail; //String
    }
    }


    // mail_log_entry->sending_zone
    if(mail_log_entry->sending_zone) {
    if(cJSON_AddStringToObject(item, "sendingZone", mail_log_entry->sending_zone) == NULL) {
    goto fail; //String
    }
    }


    // mail_log_entry->body_size
    if(mail_log_entry->body_size) {
    if(cJSON_AddNumberToObject(item, "bodySize", *mail_log_entry->body_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_log_entry->seq
    if(mail_log_entry->seq) {
    if(cJSON_AddNumberToObject(item, "seq", *mail_log_entry->seq) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_log_entry->delivered
    if(mail_log_entry->delivered) {
    if(cJSON_AddNumberToObject(item, "delivered", *mail_log_entry->delivered) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_log_entry->code
    if(mail_log_entry->code) {
    if(cJSON_AddNumberToObject(item, "code", *mail_log_entry->code) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_log_entry->recipient
    if(mail_log_entry->recipient) {
    if(cJSON_AddStringToObject(item, "recipient", mail_log_entry->recipient) == NULL) {
    goto fail; //String
    }
    }


    // mail_log_entry->response
    if(mail_log_entry->response) {
    if(cJSON_AddStringToObject(item, "response", mail_log_entry->response) == NULL) {
    goto fail; //String
    }
    }


    // mail_log_entry->domain
    if(mail_log_entry->domain) {
    if(cJSON_AddStringToObject(item, "domain", mail_log_entry->domain) == NULL) {
    goto fail; //String
    }
    }


    // mail_log_entry->locked
    if(mail_log_entry->locked) {
    if(cJSON_AddNumberToObject(item, "locked", *mail_log_entry->locked) == NULL) {
    goto fail; //Numeric
    }
    }


    // mail_log_entry->lock_time
    if(mail_log_entry->lock_time) {
    if(cJSON_AddStringToObject(item, "lockTime", mail_log_entry->lock_time) == NULL) {
    goto fail; //String
    }
    }


    // mail_log_entry->assigned
    if(mail_log_entry->assigned) {
    if(cJSON_AddStringToObject(item, "assigned", mail_log_entry->assigned) == NULL) {
    goto fail; //String
    }
    }


    // mail_log_entry->queued
    if(mail_log_entry->queued) {
    if(cJSON_AddStringToObject(item, "queued", mail_log_entry->queued) == NULL) {
    goto fail; //String
    }
    }


    // mail_log_entry->mx_hostname
    if(mail_log_entry->mx_hostname) {
    if(cJSON_AddStringToObject(item, "mxHostname", mail_log_entry->mx_hostname) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mail_log_entry_t *mail_log_entry_parseFromJSON(cJSON *mail_log_entryJSON){

    mail_log_entry_t *mail_log_entry_local_var = NULL;

    // define the local variable for mail_log_entry->_id
    int *_id_local_var = NULL;

    char *id_local_str = NULL;

    char *from_local_str = NULL;

    char *to_local_str = NULL;

    char *created_local_str = NULL;

    // define the local variable for mail_log_entry->time
    int *time_local_var = NULL;

    char *user_local_str = NULL;

    char *transtype_local_str = NULL;

    char *origin_local_str = NULL;

    char *interface_local_str = NULL;

    char *subject_local_str = NULL;

    char *message_id_local_str = NULL;

    char *sending_zone_local_str = NULL;

    // define the local variable for mail_log_entry->body_size
    int *body_size_local_var = NULL;

    // define the local variable for mail_log_entry->seq
    int *seq_local_var = NULL;

    // define the local variable for mail_log_entry->delivered
    int *delivered_local_var = NULL;

    // define the local variable for mail_log_entry->code
    int *code_local_var = NULL;

    char *recipient_local_str = NULL;

    char *response_local_str = NULL;

    char *domain_local_str = NULL;

    // define the local variable for mail_log_entry->locked
    int *locked_local_var = NULL;

    char *lock_time_local_str = NULL;

    char *assigned_local_str = NULL;

    char *queued_local_str = NULL;

    char *mx_hostname_local_str = NULL;

    // mail_log_entry->_id
    cJSON *_id = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "_id");
    if (cJSON_IsNull(_id)) {
        _id = NULL;
    }
    if (!_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(_id))
    {
    goto end; //Numeric
    }
    _id_local_var = malloc(sizeof(int));
    if(!_id_local_var)
    {
        goto end;
    }
    *_id_local_var = _id->valuedouble;

    // mail_log_entry->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // mail_log_entry->from
    cJSON *from = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "from");
    if (cJSON_IsNull(from)) {
        from = NULL;
    }
    if (!from) {
        goto end;
    }

    
    if(!cJSON_IsString(from))
    {
    goto end; //String
    }

    // mail_log_entry->to
    cJSON *to = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "to");
    if (cJSON_IsNull(to)) {
        to = NULL;
    }
    if (!to) {
        goto end;
    }

    
    if(!cJSON_IsString(to))
    {
    goto end; //String
    }

    // mail_log_entry->created
    cJSON *created = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "created");
    if (cJSON_IsNull(created)) {
        created = NULL;
    }
    if (!created) {
        goto end;
    }

    
    if(!cJSON_IsString(created))
    {
    goto end; //String
    }

    // mail_log_entry->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "time");
    if (cJSON_IsNull(time)) {
        time = NULL;
    }
    if (!time) {
        goto end;
    }

    
    if(!cJSON_IsNumber(time))
    {
    goto end; //Numeric
    }
    time_local_var = malloc(sizeof(int));
    if(!time_local_var)
    {
        goto end;
    }
    *time_local_var = time->valuedouble;

    // mail_log_entry->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "user");
    if (cJSON_IsNull(user)) {
        user = NULL;
    }
    if (!user) {
        goto end;
    }

    
    if(!cJSON_IsString(user))
    {
    goto end; //String
    }

    // mail_log_entry->transtype
    cJSON *transtype = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "transtype");
    if (cJSON_IsNull(transtype)) {
        transtype = NULL;
    }
    if (!transtype) {
        goto end;
    }

    
    if(!cJSON_IsString(transtype))
    {
    goto end; //String
    }

    // mail_log_entry->origin
    cJSON *origin = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "origin");
    if (cJSON_IsNull(origin)) {
        origin = NULL;
    }
    if (!origin) {
        goto end;
    }

    
    if(!cJSON_IsString(origin))
    {
    goto end; //String
    }

    // mail_log_entry->interface
    cJSON *interface = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "interface");
    if (cJSON_IsNull(interface)) {
        interface = NULL;
    }
    if (!interface) {
        goto end;
    }

    
    if(!cJSON_IsString(interface))
    {
    goto end; //String
    }

    // mail_log_entry->subject
    cJSON *subject = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "subject");
    if (cJSON_IsNull(subject)) {
        subject = NULL;
    }
    if (subject) { 
    if(!cJSON_IsString(subject) && !cJSON_IsNull(subject))
    {
    goto end; //String
    }
    }

    // mail_log_entry->message_id
    cJSON *message_id = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "messageId");
    if (cJSON_IsNull(message_id)) {
        message_id = NULL;
    }
    if (message_id) { 
    if(!cJSON_IsString(message_id) && !cJSON_IsNull(message_id))
    {
    goto end; //String
    }
    }

    // mail_log_entry->sending_zone
    cJSON *sending_zone = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "sendingZone");
    if (cJSON_IsNull(sending_zone)) {
        sending_zone = NULL;
    }
    if (sending_zone) { 
    if(!cJSON_IsString(sending_zone) && !cJSON_IsNull(sending_zone))
    {
    goto end; //String
    }
    }

    // mail_log_entry->body_size
    cJSON *body_size = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "bodySize");
    if (cJSON_IsNull(body_size)) {
        body_size = NULL;
    }
    if (body_size) { 
    if(!cJSON_IsNumber(body_size))
    {
    goto end; //Numeric
    }
    body_size_local_var = malloc(sizeof(int));
    if(!body_size_local_var)
    {
        goto end;
    }
    *body_size_local_var = body_size->valuedouble;
    }

    // mail_log_entry->seq
    cJSON *seq = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "seq");
    if (cJSON_IsNull(seq)) {
        seq = NULL;
    }
    if (seq) { 
    if(!cJSON_IsNumber(seq))
    {
    goto end; //Numeric
    }
    seq_local_var = malloc(sizeof(int));
    if(!seq_local_var)
    {
        goto end;
    }
    *seq_local_var = seq->valuedouble;
    }

    // mail_log_entry->delivered
    cJSON *delivered = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "delivered");
    if (cJSON_IsNull(delivered)) {
        delivered = NULL;
    }
    if (delivered) { 
    if(!cJSON_IsNumber(delivered))
    {
    goto end; //Numeric
    }
    delivered_local_var = malloc(sizeof(int));
    if(!delivered_local_var)
    {
        goto end;
    }
    *delivered_local_var = delivered->valuedouble;
    }

    // mail_log_entry->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsNumber(code))
    {
    goto end; //Numeric
    }
    code_local_var = malloc(sizeof(int));
    if(!code_local_var)
    {
        goto end;
    }
    *code_local_var = code->valuedouble;
    }

    // mail_log_entry->recipient
    cJSON *recipient = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "recipient");
    if (cJSON_IsNull(recipient)) {
        recipient = NULL;
    }
    if (recipient) { 
    if(!cJSON_IsString(recipient) && !cJSON_IsNull(recipient))
    {
    goto end; //String
    }
    }

    // mail_log_entry->response
    cJSON *response = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "response");
    if (cJSON_IsNull(response)) {
        response = NULL;
    }
    if (response) { 
    if(!cJSON_IsString(response) && !cJSON_IsNull(response))
    {
    goto end; //String
    }
    }

    // mail_log_entry->domain
    cJSON *domain = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "domain");
    if (cJSON_IsNull(domain)) {
        domain = NULL;
    }
    if (domain) { 
    if(!cJSON_IsString(domain) && !cJSON_IsNull(domain))
    {
    goto end; //String
    }
    }

    // mail_log_entry->locked
    cJSON *locked = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "locked");
    if (cJSON_IsNull(locked)) {
        locked = NULL;
    }
    if (locked) { 
    if(!cJSON_IsNumber(locked))
    {
    goto end; //Numeric
    }
    locked_local_var = malloc(sizeof(int));
    if(!locked_local_var)
    {
        goto end;
    }
    *locked_local_var = locked->valuedouble;
    }

    // mail_log_entry->lock_time
    cJSON *lock_time = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "lockTime");
    if (cJSON_IsNull(lock_time)) {
        lock_time = NULL;
    }
    if (lock_time) { 
    if(!cJSON_IsString(lock_time) && !cJSON_IsNull(lock_time))
    {
    goto end; //String
    }
    }

    // mail_log_entry->assigned
    cJSON *assigned = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "assigned");
    if (cJSON_IsNull(assigned)) {
        assigned = NULL;
    }
    if (assigned) { 
    if(!cJSON_IsString(assigned) && !cJSON_IsNull(assigned))
    {
    goto end; //String
    }
    }

    // mail_log_entry->queued
    cJSON *queued = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "queued");
    if (cJSON_IsNull(queued)) {
        queued = NULL;
    }
    if (queued) { 
    if(!cJSON_IsString(queued) && !cJSON_IsNull(queued))
    {
    goto end; //String
    }
    }

    // mail_log_entry->mx_hostname
    cJSON *mx_hostname = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "mxHostname");
    if (cJSON_IsNull(mx_hostname)) {
        mx_hostname = NULL;
    }
    if (mx_hostname) { 
    if(!cJSON_IsString(mx_hostname) && !cJSON_IsNull(mx_hostname))
    {
    goto end; //String
    }
    }


    if (id && !cJSON_IsNull(id)) id_local_str = strdup(id->valuestring);
    if (from && !cJSON_IsNull(from)) from_local_str = strdup(from->valuestring);
    if (to && !cJSON_IsNull(to)) to_local_str = strdup(to->valuestring);
    if (created && !cJSON_IsNull(created)) created_local_str = strdup(created->valuestring);
    if (user && !cJSON_IsNull(user)) user_local_str = strdup(user->valuestring);
    if (transtype && !cJSON_IsNull(transtype)) transtype_local_str = strdup(transtype->valuestring);
    if (origin && !cJSON_IsNull(origin)) origin_local_str = strdup(origin->valuestring);
    if (interface && !cJSON_IsNull(interface)) interface_local_str = strdup(interface->valuestring);
    if (subject && !cJSON_IsNull(subject)) subject_local_str = strdup(subject->valuestring);
    if (message_id && !cJSON_IsNull(message_id)) message_id_local_str = strdup(message_id->valuestring);
    if (sending_zone && !cJSON_IsNull(sending_zone)) sending_zone_local_str = strdup(sending_zone->valuestring);
    if (recipient && !cJSON_IsNull(recipient)) recipient_local_str = strdup(recipient->valuestring);
    if (response && !cJSON_IsNull(response)) response_local_str = strdup(response->valuestring);
    if (domain && !cJSON_IsNull(domain)) domain_local_str = strdup(domain->valuestring);
    if (lock_time && !cJSON_IsNull(lock_time)) lock_time_local_str = strdup(lock_time->valuestring);
    if (assigned && !cJSON_IsNull(assigned)) assigned_local_str = strdup(assigned->valuestring);
    if (queued && !cJSON_IsNull(queued)) queued_local_str = strdup(queued->valuestring);
    if (mx_hostname && !cJSON_IsNull(mx_hostname)) mx_hostname_local_str = strdup(mx_hostname->valuestring);

    mail_log_entry_local_var = mail_log_entry_create_internal (
        _id_local_var,
        id_local_str,
        from_local_str,
        to_local_str,
        created_local_str,
        time_local_var,
        user_local_str,
        transtype_local_str,
        origin_local_str,
        interface_local_str,
        subject_local_str,
        message_id_local_str,
        sending_zone_local_str,
        body_size_local_var,
        seq_local_var,
        delivered_local_var,
        code_local_var,
        recipient_local_str,
        response_local_str,
        domain_local_str,
        locked_local_var,
        lock_time_local_str,
        assigned_local_str,
        queued_local_str,
        mx_hostname_local_str
        );

    if (!mail_log_entry_local_var) {
        goto end;
    }

    return mail_log_entry_local_var;
end:
    if (_id_local_var) {
        free(_id_local_var);
        _id_local_var = NULL;
    }
    if (id_local_str) {
        free(id_local_str);
        id_local_str = NULL;
    }
    if (from_local_str) {
        free(from_local_str);
        from_local_str = NULL;
    }
    if (to_local_str) {
        free(to_local_str);
        to_local_str = NULL;
    }
    if (created_local_str) {
        free(created_local_str);
        created_local_str = NULL;
    }
    if (time_local_var) {
        free(time_local_var);
        time_local_var = NULL;
    }
    if (user_local_str) {
        free(user_local_str);
        user_local_str = NULL;
    }
    if (transtype_local_str) {
        free(transtype_local_str);
        transtype_local_str = NULL;
    }
    if (origin_local_str) {
        free(origin_local_str);
        origin_local_str = NULL;
    }
    if (interface_local_str) {
        free(interface_local_str);
        interface_local_str = NULL;
    }
    if (subject_local_str) {
        free(subject_local_str);
        subject_local_str = NULL;
    }
    if (message_id_local_str) {
        free(message_id_local_str);
        message_id_local_str = NULL;
    }
    if (sending_zone_local_str) {
        free(sending_zone_local_str);
        sending_zone_local_str = NULL;
    }
    if (body_size_local_var) {
        free(body_size_local_var);
        body_size_local_var = NULL;
    }
    if (seq_local_var) {
        free(seq_local_var);
        seq_local_var = NULL;
    }
    if (delivered_local_var) {
        free(delivered_local_var);
        delivered_local_var = NULL;
    }
    if (code_local_var) {
        free(code_local_var);
        code_local_var = NULL;
    }
    if (recipient_local_str) {
        free(recipient_local_str);
        recipient_local_str = NULL;
    }
    if (response_local_str) {
        free(response_local_str);
        response_local_str = NULL;
    }
    if (domain_local_str) {
        free(domain_local_str);
        domain_local_str = NULL;
    }
    if (locked_local_var) {
        free(locked_local_var);
        locked_local_var = NULL;
    }
    if (lock_time_local_str) {
        free(lock_time_local_str);
        lock_time_local_str = NULL;
    }
    if (assigned_local_str) {
        free(assigned_local_str);
        assigned_local_str = NULL;
    }
    if (queued_local_str) {
        free(queued_local_str);
        queued_local_str = NULL;
    }
    if (mx_hostname_local_str) {
        free(mx_hostname_local_str);
        mx_hostname_local_str = NULL;
    }
    return NULL;

}
