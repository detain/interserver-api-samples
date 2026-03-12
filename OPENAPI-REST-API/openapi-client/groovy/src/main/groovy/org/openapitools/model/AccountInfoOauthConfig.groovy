package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.AccountInfoOauthConfigProviders;

@Canonical
class AccountInfoOauthConfig {
    
    String callback
    
    AccountInfoOauthConfigProviders providers = new HashMap<>()
}
