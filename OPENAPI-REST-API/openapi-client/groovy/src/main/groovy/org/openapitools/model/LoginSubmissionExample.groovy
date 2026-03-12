package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.LoginSubmissionExampleGRecaptchaResponse;

@Canonical
class LoginSubmissionExample {
    
    String login
    
    String passwd
    
    String remember
    
    LoginSubmissionExampleGRecaptchaResponse gRecaptchaResponse
    /* Two Factor Authentication Response. */
    String tfa
}
