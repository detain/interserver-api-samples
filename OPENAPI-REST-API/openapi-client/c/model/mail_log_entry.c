#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_log_entry.h"



static mail_log_entry_t *mail_log_entry_create_internal(
    int _id,
    char *id,
    char *from,
    char *to,
    char *subject,
    char *created,
    int time,
    char *user,
    char *transtype,
    char *origin,
    char *interface,
    char *sending_zone,
    int body_size,
    int seq,
    char *recipient,
    char *domain,
    int locked,
    int lock_time,
    char *assigned,
    char *queued,
    char *mx_hostname,
    char *response,
    char *message_id
    ) {
    mail_log_entry_t *mail_log_entry_local_var = malloc(sizeof(mail_log_entry_t));
    if (!mail_log_entry_local_var) {
        return NULL;
    }
    mail_log_entry_local_var->_id = _id;
    mail_log_entry_local_var->id = id;
    mail_log_entry_local_var->from = from;
    mail_log_entry_local_var->to = to;
    mail_log_entry_local_var->subject = subject;
    mail_log_entry_local_var->created = created;
    mail_log_entry_local_var->time = time;
    mail_log_entry_local_var->user = user;
    mail_log_entry_local_var->transtype = transtype;
    mail_log_entry_local_var->origin = origin;
    mail_log_entry_local_var->interface = interface;
    mail_log_entry_local_var->sending_zone = sending_zone;
    mail_log_entry_local_var->body_size = body_size;
    mail_log_entry_local_var->seq = seq;
    mail_log_entry_local_var->recipient = recipient;
    mail_log_entry_local_var->domain = domain;
    mail_log_entry_local_var->locked = locked;
    mail_log_entry_local_var->lock_time = lock_time;
    mail_log_entry_local_var->assigned = assigned;
    mail_log_entry_local_var->queued = queued;
    mail_log_entry_local_var->mx_hostname = mx_hostname;
    mail_log_entry_local_var->response = response;
    mail_log_entry_local_var->message_id = message_id;

    mail_log_entry_local_var->_library_owned = 1;
    return mail_log_entry_local_var;
}

__attribute__((deprecated)) mail_log_entry_t *mail_log_entry_create(
    int _id,
    char *id,
    char *from,
    char *to,
    char *subject,
    char *created,
    int time,
    char *user,
    char *transtype,
    char *origin,
    char *interface,
    char *sending_zone,
    int body_size,
    int seq,
    char *recipient,
    char *domain,
    int locked,
    int lock_time,
    char *assigned,
    char *queued,
    char *mx_hostname,
    char *response,
    char *message_id
    ) {
    return mail_log_entry_create_internal (
        _id,
        id,
        from,
        to,
        subject,
        created,
        time,
        user,
        transtype,
        origin,
        interface,
        sending_zone,
        body_size,
        seq,
        recipient,
        domain,
        locked,
        lock_time,
        assigned,
        queued,
        mx_hostname,
        response,
        message_id
        );
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
    if (mail_log_entry->subject) {
        free(mail_log_entry->subject);
        mail_log_entry->subject = NULL;
    }
    if (mail_log_entry->created) {
        free(mail_log_entry->created);
        mail_log_entry->created = NULL;
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
    if (mail_log_entry->sending_zone) {
        free(mail_log_entry->sending_zone);
        mail_log_entry->sending_zone = NULL;
    }
    if (mail_log_entry->recipient) {
        free(mail_log_entry->recipient);
        mail_log_entry->recipient = NULL;
    }
    if (mail_log_entry->domain) {
        free(mail_log_entry->domain);
        mail_log_entry->domain = NULL;
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
    if (mail_log_entry->response) {
        free(mail_log_entry->response);
        mail_log_entry->response = NULL;
    }
    if (mail_log_entry->message_id) {
        free(mail_log_entry->message_id);
        mail_log_entry->message_id = NULL;
    }
    free(mail_log_entry);
}

cJSON *mail_log_entry_convertToJSON(mail_log_entry_t *mail_log_entry) {
    cJSON *item = cJSON_CreateObject();

    // mail_log_entry->_id
    if (!mail_log_entry->_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "_id", mail_log_entry->_id) == NULL) {
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


    // mail_log_entry->subject
    if (!mail_log_entry->subject) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "subject", mail_log_entry->subject) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "time", mail_log_entry->time) == NULL) {
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


    // mail_log_entry->sending_zone
    if (!mail_log_entry->sending_zone) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sendingZone", mail_log_entry->sending_zone) == NULL) {
    goto fail; //String
    }


    // mail_log_entry->body_size
    if (!mail_log_entry->body_size) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "bodySize", mail_log_entry->body_size) == NULL) {
    goto fail; //Numeric
    }


    // mail_log_entry->seq
    if (!mail_log_entry->seq) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "seq", mail_log_entry->seq) == NULL) {
    goto fail; //Numeric
    }


    // mail_log_entry->recipient
    if (!mail_log_entry->recipient) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "recipient", mail_log_entry->recipient) == NULL) {
    goto fail; //String
    }


    // mail_log_entry->domain
    if (!mail_log_entry->domain) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "domain", mail_log_entry->domain) == NULL) {
    goto fail; //String
    }


    // mail_log_entry->locked
    if (!mail_log_entry->locked) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "locked", mail_log_entry->locked) == NULL) {
    goto fail; //Numeric
    }


    // mail_log_entry->lock_time
    if (!mail_log_entry->lock_time) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "lockTime", mail_log_entry->lock_time) == NULL) {
    goto fail; //Numeric
    }


    // mail_log_entry->assigned
    if (!mail_log_entry->assigned) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "assigned", mail_log_entry->assigned) == NULL) {
    goto fail; //String
    }


    // mail_log_entry->queued
    if (!mail_log_entry->queued) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "queued", mail_log_entry->queued) == NULL) {
    goto fail; //String
    }


    // mail_log_entry->mx_hostname
    if (!mail_log_entry->mx_hostname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "mxHostname", mail_log_entry->mx_hostname) == NULL) {
    goto fail; //String
    }


    // mail_log_entry->response
    if (!mail_log_entry->response) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "response", mail_log_entry->response) == NULL) {
    goto fail; //String
    }


    // mail_log_entry->message_id
    if(mail_log_entry->message_id) {
    if(cJSON_AddStringToObject(item, "messageId", mail_log_entry->message_id) == NULL) {
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

    // mail_log_entry->subject
    cJSON *subject = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "subject");
    if (cJSON_IsNull(subject)) {
        subject = NULL;
    }
    if (!subject) {
        goto end;
    }

    
    if(!cJSON_IsString(subject))
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

    // mail_log_entry->sending_zone
    cJSON *sending_zone = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "sendingZone");
    if (cJSON_IsNull(sending_zone)) {
        sending_zone = NULL;
    }
    if (!sending_zone) {
        goto end;
    }

    
    if(!cJSON_IsString(sending_zone))
    {
    goto end; //String
    }

    // mail_log_entry->body_size
    cJSON *body_size = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "bodySize");
    if (cJSON_IsNull(body_size)) {
        body_size = NULL;
    }
    if (!body_size) {
        goto end;
    }

    
    if(!cJSON_IsNumber(body_size))
    {
    goto end; //Numeric
    }

    // mail_log_entry->seq
    cJSON *seq = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "seq");
    if (cJSON_IsNull(seq)) {
        seq = NULL;
    }
    if (!seq) {
        goto end;
    }

    
    if(!cJSON_IsNumber(seq))
    {
    goto end; //Numeric
    }

    // mail_log_entry->recipient
    cJSON *recipient = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "recipient");
    if (cJSON_IsNull(recipient)) {
        recipient = NULL;
    }
    if (!recipient) {
        goto end;
    }

    
    if(!cJSON_IsString(recipient))
    {
    goto end; //String
    }

    // mail_log_entry->domain
    cJSON *domain = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "domain");
    if (cJSON_IsNull(domain)) {
        domain = NULL;
    }
    if (!domain) {
        goto end;
    }

    
    if(!cJSON_IsString(domain))
    {
    goto end; //String
    }

    // mail_log_entry->locked
    cJSON *locked = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "locked");
    if (cJSON_IsNull(locked)) {
        locked = NULL;
    }
    if (!locked) {
        goto end;
    }

    
    if(!cJSON_IsNumber(locked))
    {
    goto end; //Numeric
    }

    // mail_log_entry->lock_time
    cJSON *lock_time = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "lockTime");
    if (cJSON_IsNull(lock_time)) {
        lock_time = NULL;
    }
    if (!lock_time) {
        goto end;
    }

    
    if(!cJSON_IsNumber(lock_time))
    {
    goto end; //Numeric
    }

    // mail_log_entry->assigned
    cJSON *assigned = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "assigned");
    if (cJSON_IsNull(assigned)) {
        assigned = NULL;
    }
    if (!assigned) {
        goto end;
    }

    
    if(!cJSON_IsString(assigned))
    {
    goto end; //String
    }

    // mail_log_entry->queued
    cJSON *queued = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "queued");
    if (cJSON_IsNull(queued)) {
        queued = NULL;
    }
    if (!queued) {
        goto end;
    }

    
    if(!cJSON_IsString(queued))
    {
    goto end; //String
    }

    // mail_log_entry->mx_hostname
    cJSON *mx_hostname = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "mxHostname");
    if (cJSON_IsNull(mx_hostname)) {
        mx_hostname = NULL;
    }
    if (!mx_hostname) {
        goto end;
    }

    
    if(!cJSON_IsString(mx_hostname))
    {
    goto end; //String
    }

    // mail_log_entry->response
    cJSON *response = cJSON_GetObjectItemCaseSensitive(mail_log_entryJSON, "response");
    if (cJSON_IsNull(response)) {
        response = NULL;
    }
    if (!response) {
        goto end;
    }

    
    if(!cJSON_IsString(response))
    {
    goto end; //String
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


    mail_log_entry_local_var = mail_log_entry_create_internal (
        _id->valuedouble,
        strdup(id->valuestring),
        strdup(from->valuestring),
        strdup(to->valuestring),
        strdup(subject->valuestring),
        strdup(created->valuestring),
        time->valuedouble,
        strdup(user->valuestring),
        strdup(transtype->valuestring),
        strdup(origin->valuestring),
        strdup(interface->valuestring),
        strdup(sending_zone->valuestring),
        body_size->valuedouble,
        seq->valuedouble,
        strdup(recipient->valuestring),
        strdup(domain->valuestring),
        locked->valuedouble,
        lock_time->valuedouble,
        strdup(assigned->valuestring),
        strdup(queued->valuestring),
        strdup(mx_hostname->valuestring),
        strdup(response->valuestring),
        message_id && !cJSON_IsNull(message_id) ? strdup(message_id->valuestring) : NULL
        );

    return mail_log_entry_local_var;
end:
    return NULL;

}
