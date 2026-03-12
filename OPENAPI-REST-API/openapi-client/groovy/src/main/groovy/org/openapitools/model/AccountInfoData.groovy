package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.AccountInfoDataCcs;
import org.openapitools.model.AccountInfoDataEmailSettings;
import org.openapitools.model.AccountInfoDataExtra;
import org.openapitools.model.AccountInfoDataFraudrecord;
import org.openapitools.model.AccountInfoMaxMindResponse;

@Canonical
class AccountInfoData {
    
    String group
    
    String address
    
    String city
    
    String country
    
    String disableCc
    
    String fraudrecordScore
    
    String ima
    
    String name
    
    String paymentMethod
    
    String phone
    
    String pin
    
    String state
    
    String status
    
    String zip
    
    String accountId
    
    String accountLid
    
    String address2
    
    String affiliateDockDescription
    
    String affiliateDockTitle
    
    String affiliatePaymentMethod
    
    String affiliatePaypal
    
    String cc
    
    String ccAuto
    
    String ccExp
    
    String ccType
    
    String ccWhitelist
    
    AccountInfoDataCcs ccs = new HashMap<>()
    
    String ccsAdded
    
    String company
    
    String currency
    
    String disableReinstall
    
    String disableReset
    
    String email
    
    String emailAbuse
    
    AccountInfoDataEmailSettings emailSettings
    
    AccountInfoDataExtra extra
    
    String facebookId
    
    String facebookUrl
    
    String firstname
    
    AccountInfoDataFraudrecord fraudrecord
    
    String githubId
    
    String githubUrl
    
    String googleId
    
    String googleUrl
    
    String innertellId
    
    String lastname
    
    String locale
    
    AccountInfoMaxMindResponse maxmind
    
    String maxmindScore
    
    String mbId
    
    String modernbillId
    
    String picture
    
    String referrerCoupon
    
    String resellerMarkup
    
    String username
    
    String sshKey
    
    String sshKeyWrapped
    
    String apiKey
    
    String apiKeyWrapped
    
    String _2faGoogleKey
    
    Boolean _2faGoogleEnabled
    
    Integer _2faGoogle
    
    String _2faGoogleSplit
    
    String _2faGoogleQr
}
