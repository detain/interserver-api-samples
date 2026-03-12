package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.AccountInfoCountryCurrencies;
import org.openapitools.model.AccountInfoData;
import org.openapitools.model.AccountInfoLimits;
import org.openapitools.model.AccountInfoOauthConfig;
import org.openapitools.model.AccountInfoOauthproviders;

@Canonical
class AccountInfo {
    
    String custid
    
    String ima
    
    AccountInfoData data
    
    String ip
    
    AccountInfoOauthproviders oauthproviders
    
    AccountInfoOauthConfig oauthconfig
    
    List<String> oauthadapters = new ArrayList<>()
    
    AccountInfoLimits limits = new ArrayList<>()
    
    String language
    
    AccountInfoCountryCurrencies countryCurrencies = new HashMap<>()
    
    Boolean enableLocales
    
    Boolean enableCurrencies
    
    String gravatar
}
