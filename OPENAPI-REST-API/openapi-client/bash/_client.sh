#compdef 

# !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
# !
# ! Note:
# !
# ! THIS SCRIPT HAS BEEN AUTOMATICALLY GENERATED USING
# ! openapi-generator (https://openapi-generator.tech)
# ! FROM OPENAPI SPECIFICATION IN JSON.
# !
# ! Based on: https://github.com/Valodim/zsh-curl-completion/blob/master/_curl
# !
# ! Generator version: 7.21.0
# !
# !
# ! Installation:
# !
# ! Copy the _ file to any directory under FPATH
# ! environment variable (echo $FPATH)
# !
# !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


local curcontext="$curcontext" state line ret=1
typeset -A opt_args

typeset -A mime_type_abbreviations
# text/*
mime_type_abbreviations[text]="text/plain"
mime_type_abbreviations[html]="text/html"
mime_type_abbreviations[md]="text/x-markdown"
mime_type_abbreviations[csv]="text/csv"
mime_type_abbreviations[css]="text/css"
mime_type_abbreviations[rtf]="text/rtf"
# application/*
mime_type_abbreviations[json]="application/json"
mime_type_abbreviations[xml]="application/xml"
mime_type_abbreviations[yaml]="application/yaml"
mime_type_abbreviations[js]="application/javascript"
mime_type_abbreviations[bin]="application/octet-stream"
mime_type_abbreviations[rdf]="application/rdf+xml"
# image/*
mime_type_abbreviations[jpg]="image/jpeg"
mime_type_abbreviations[png]="image/png"
mime_type_abbreviations[gif]="image/gif"
mime_type_abbreviations[bmp]="image/bmp"
mime_type_abbreviations[tiff]="image/tiff"

#
# Generate zsh completion string list for abbreviated mime types
#
get_mime_type_completions() {
    typeset -a result
    result=()
    for k in "${(@k)mime_type_abbreviations}"; do
        value=$mime_type_abbreviations[${k}]
        #echo $value
        result+=( "${k}[${value}]" )
        #echo $result
    done
    echo "$result"
}

#
# cURL crypto engines completion function
#
_curl_crypto_engine() {
    local vals
    vals=( ${${(f)"$(curl --engine list)":gs/ /}[2,$]} )
    _describe -t outputs 'engines' vals && return 0
}

#
# cURL post data completion functions=
#
_curl_post_data() {

    # don't do anything further if this is raw content
    compset -P '=' && _message 'raw content' && return 0

    # complete filename or stdin for @ syntax
    compset -P '*@' && {
        local expl
        _description files expl stdin
        compadd "$expl[@]" - "-"
        _files
        return 0
    }

    # got a name already? expecting data.
    compset -P '*=' && _message 'data value' && return 0

    # otherwise, name (or @ or =) should be specified
    _message 'data name' && return 0

}


local arg_http arg_ftp arg_other arg_proxy arg_crypto arg_connection arg_auth arg_input arg_output

# HTTP Arguments
arg_http=(''\
  {-0,--http1.0}'[force use of use http 1.0 instead of 1.1]' \
  {-b,--cookie}'[pass data to http server as cookie]:data or file' \
  {-c,--cookie-jar}'[specify cookie file]:file name:_files' \
  {-d,--data}'[send specified data as HTTP POST data]:data:{_curl_post_data}' \
  '--data-binary[post HTTP POST data without any processing]:data:{_curl_post_data}' \
  '--data-urlencode[post HTTP POST data, with url encoding]:data:{_curl_post_data}' \
  {-f,--fail}'[enable failfast behavior for server errors]' \
  '*'{-F,--form}'[add POST form data]:name=content' \
  {-G,--get}'[use HTTP GET even with data (-d, --data, --data-binary)]' \
  '*'{-H,--header}'[specify an extra header]:header' \
  '--ignore-content-length[ignore Content-Length header]' \
  {-i,--include}'[include HTTP header in the output]' \
  {-j,--junk-session-cookies}'[discard all session cookies]' \
  {-e,--referer}'[send url as referer]:referer url:_urls' \
  {-L,--location}'[follow Location headers on http 3XX response]' \
  '--location-trusted[like --location, but allows sending of auth data to redirected hosts]' \
  '--max-redirs[set maximum number of redirection followings allowed]:number' \
  {-J,--remote-header-name}'[use Content-Disposition for output file name]' \
  {-O,--remote-name}'[write to filename parsed from url instead of stdout]' \
  '--post301[do not convert POST to GET after following 301 Location response (follow RFC 2616/10.3.2)]' \
  '--post302[do not convert POST to GET after following 302 Location response (follow RFC 2616/10.3.2)]' \
  )

# FTP arguments
arg_ftp=(\
  {-a,--append}'[append to target file instead of overwriting (FTP/SFTP)]' \
  '--crlf[convert LF to CRLF in upload]' \
  '--disable-eprt[disable use of EPRT and LPRT for active FTP transfers]' \
  '--disable-epsv[disable use of EPSV for passive FTP transfers]' \
  '--ftp-account[account data (FTP)]:data' \
  '--ftp-alternative-to-user[command to send when USER and PASS commands fail (FTP)]:command' \
  '--ftp-create-dirs[create paths remotely if it does not exist]' \
  '--ftp-method[ftp method to use to reach a file (FTP)]:method:(multicwd ocwd singlecwd)' \
  '--ftp-pasv[use passive mode for the data connection (FTP)]' \
  '--ftp-skip-pasv-ip[do not use the ip the server suggests for PASV]' \
  '--form-string[like --form, but do not parse content]:name=string' \
  '--ftp-pret[send PRET before PASV]' \
  '--ftp-ssl-ccc[use clear command channel (CCC) after authentication (FTP)]' \
  '--ftp-ssl-ccc-mode[sets the CCC mode (FTP)]:mode:(active passive)' \
  '--ftp-ssl-control[require SSL/TLS for FTP login, clear for transfer]' \
  {-l,--list-only}'[list names only when listing directories (FTP)]' \
  {-P,--ftp-port}'[use active mode, tell server to connect to specified address or interface (FTP]:address' \
  '*'{-Q,--quote}'[send arbitrary command to the remote server before transfer (FTP/SFTP)]:command' \
  )

# Other Protocol arguments
arg_other=(\
  '--mail-from[specify From: address]:address' \
  '--mail-rcpt[specify email recipient for SMTP, may be given multiple times]:address' \
  {-t,--telnet-option}'[pass options to telnet protocol]:opt=val' \
  '--tftp-blksize[set tftp BLKSIZE option]:value' \
  )

# Proxy arguments
arg_proxy=(\
  '--noproxy[list of hosts to connect directly to instead of through proxy]:no-proxy-list' \
  {-p,--proxytunnel}'[tunnel non-http protocols through http proxy]' \
  {-U,--proxy-user}'[specify the user name and password to use for proxy authentication]:user:password' \
  '--proxy-anyauth[use any authentication method for proxy, default to most secure]' \
  '--proxy-basic[use HTTP Basic authentication for proxy]' \
  '--proxy-digest[use http digest authentication for proxy]' \
  '--proxy-negotiate[enable GSS-Negotiate authentication for proxy]' \
  '--proxy-ntlm[enable ntlm authentication for proxy]' \
  '--proxy1.0[use http 1.0 proxy]:proxy url' \
  {-x,--proxy}'[use specified proxy]:proxy url' \
  '--socks5-gssapi-service[change service name for socks server]:servicename' \
  '--socks5-gssapi-nec[allow unprotected exchange of protection mode negotiation]' \
  )

# Crypto arguments
arg_crypto=(\
  {-1,--tlsv1}'[Forces curl to use TLS version 1 when negotiating with a remote TLS server.]' \
  {-2,--sslv2}'[Forces curl to use SSL version 2 when negotiating with a remote SSL server.]' \
  {-3,--sslv3}'[Forces curl to use SSL version 3 when negotiating with a remote SSL server.]' \
  '--ciphers[specifies which cipher to use for the ssl connection]:list of ciphers' \
  '--crlfile[specify file with revoked certificates]:file' \
  '--delegation[set delegation policy to use with GSS/kerberos]:delegation policy:(none policy always)' \
  {-E,--cert}'[use specified client certificate]:certificate file:_files' \
  '--engine[use selected OpenSSL crypto engine]:ssl crypto engine:{_curl_crypto_engine}' \
  '--egd-file[set ssl entropy gathering daemon socket]:entropy socket:_files' \
  '--cert-type[specify certificate type (PEM, DER, ENG)]:certificate type:(PEM DER ENG)' \
  '--cacert[specify certificate file to verify the peer with]:CA certificate:_files' \
  '--capath[specify a search path for certificate files]:CA certificate directory:_directories' \
  '--hostpubmd5[check remote hosts public key]:md5 hash' \
  {-k,--insecure}'[allow ssl to perform insecure ssl connections (ie, ignore certificate)]' \
  '--key[ssl/ssh private key file name]:key file:_files' \
  '--key-type[ssl/ssh private key file type]:file type:(PEM DER ENG)' \
  '--pubkey[ssh public key file]:pubkey file:_files' \
  '--random-file[set source of random data for ssl]:random source:_files' \
  '--no-sessionid[disable caching of ssl session ids]' \
  '--pass:phrase[passphrase for ssl/ssh private key]' \
  '--ssl[try to use ssl/tls for connection, if available]' \
  '--ssl-reqd[try to use ssl/tls for connection, fail if unavailable]' \
  '--tlsauthtype[set TLS authentication type (only SRP supported!)]:authtype' \
  '--tlsuser[set username for TLS authentication]:user' \
  '--tlspassword[set password for TLS authentication]:password' \
  )

# Connection arguments
arg_connection=(\
  {-4,--ipv4}'[prefer ipv4]' \
  {-6,--ipv6}'[prefer ipv6, if available]' \
  {-B,--use-ascii}'[use ascii mode]' \
  '--compressed[request a compressed transfer]' \
  '--connect-timeout[timeout for connection phase]:seconds' \
  {-I,--head}'[fetch http HEAD only (HTTP/FTP/FILE]' \
  '--interface[work on a specific interface]:name' \
  '--keepalive-time[set time to wait before sending keepalive probes]:seconds' \
  '--limit-rate[specify maximum transfer rate]:speed' \
  '--local-port[set preferred number or range of local ports to use]:num' \
  {-N,--no-buffer}'[disable buffering of the output stream]' \
  '--no-keepalive[disable use of keepalive messages in TCP connections]' \
  '--raw[disable all http decoding and pass raw data]' \
  '--resolve[provide a custom address for a specific host and port pair]:host\:port\:address' \
  '--retry[specify maximum number of retries for transient errors]:num' \
  '--retry-delay[specify delay between retries]:seconds' \
  '--retry-max-time[maximum time to spend on retries]:seconds' \
  '--tcp-nodelay[turn on TCP_NODELAY option]' \
  {-y,--speed-time}'[specify time to abort after if download is slower than speed-limit]:time' \
  {-Y,--speed-limit}'[specify minimum speed for --speed-time]:speed' \
  )

# Authentication arguments
arg_auth=(\
  '--anyauth[use any authentication method, default to most secure]' \
  '--basic[use HTTP Basic authentication]' \
  '--ntlm[enable ntlm authentication]' \
  '--digest[use http digest authentication]' \
  '--krb[use kerberos authentication]:auth:(clear safe confidential private)' \
  '--negotiate[enable GSS-Negotiate authentication]' \
  {-n,--netrc}'[scan ~/.netrc for login data]' \
  '--netrc-optional[like --netrc, but does not make .netrc usage mandatory]' \
  '--netrc-file[like --netrc, but specify file to use]:netrc file:_files' \
  '--tr-encoding[request compressed transfer-encoding]' \
  {-u,--user}'[specify user name and password for server authentication]:user\:password' \
  )

# Input arguments
arg_input=(\
  {-C,--continue-at}'[resume at offset ]:offset' \
  {-g,--globoff}'[do not glob {}\[\] letters]' \
  '--max-filesize[maximum filesize to download, fail for bigger files]:bytes' \
  '--proto[specify allowed protocols for transfer]:protocols' \
  '--proto-redir[specify allowed protocols for transfer after a redirect]:protocols' \
  {-r,--range}'[set range of bytes to request (HTTP/FTP/SFTP/FILE)]:range' \
  {-R,--remote-time}'[use timestamp of remote file for local file]' \
  {-T,--upload-file}'[transfer file to remote url (using PUT for HTTP)]:file to upload:_files' \
  '--url[specify a URL to fetch (multi)]:url:_urls' \
  {-z,--time-cond}'[request downloaded file to be newer than date or given reference file]:date expression' \
  )

# Output arguments
arg_output=(\
  '--create-dirs[create local directory hierarchy as needed]' \
  {-D,--dump-header}'[write protocol headers to file]:dump file:_files' \
  {-o,--output}'[write to specified file instead of stdout]:output file:_files' \
  {--progress-bar,-\#}'[display progress as a simple progress bar]' \
  {-\#,--progress-bar}'[Make curl display progress as a simple progress bar instead of the standard, more informational, meter.]' \
  {-R,--remote-time}'[use timestamp of remote file for local file]' \
  '--raw[disable all http decoding and pass raw data]' \
  {-s,--silent}'[silent mode, do not show progress meter or error messages]' \
  {-S,--show-error}'[show errors in silent mode]' \
  '--stderr[redirect stderr to specified file]:output file:_files' \
  '--trace[enable full trace dump of all incoming and outgoing data]:trace file:_files' \
  '--trace-ascii[enable full trace dump of all incoming and outgoing data, without hex data]:trace file:_files' \
  '--trace-time[prepends a time stamp to each trace or verbose line that curl displays]' \
  {-v,--verbose}'[output debug info]' \
  {-w,--write-out}'[specify message to output on successful operation]:format string' \
  '--xattr[store some file metadata in extended file attributes]' \
  {-X,--request}'[specifies request method for HTTP server]:method:(GET POST PUT DELETE HEAD OPTIONS TRACE CONNECT PATCH LINK UNLINK)' \
  )

_arguments -C -s $arg_http $arg_ftp $arg_other $arg_crypto $arg_connection $arg_auth $arg_input $arg_output \
  {-M,--manual}'[Print manual]' \
  '*'{-K,--config}'[Use other config file to read arguments from]:config file:_files' \
  '--libcurl[output libcurl code for the operation to file]:output file:_files' \
  {-m,--max-time}'[Limit total time of operation]:seconds' \
  {-s,--silent}'[Silent mode, do not show progress meter or error messages]' \
  {-S,--show-error}'[Show errors in silent mode]' \
  '--stderr[Redirect stderr to specified file]:output file:_files' \
  '-q[Do not read settings from .curlrc (must be first option)]' \
  {-h,--help}'[Print help and list of operations]' \
  {-V,--version}'[Print service API version]' \
  '--about[Print the information about service]' \
  '--host[Specify the host URL]':URL:_urls \
  '--dry-run[Print out the cURL command without executing it]' \
  {-ac,--accept}'[Set the Accept header in the request]: :{_values "Accept mime type" $(get_mime_type_completions)}' \
  {-ct,--content-type}'[Set the Content-type header in request]: :{_values "Content mime type" $(get_mime_type_completions)}' \
  '1: :->ops' \
  '*:: :->args' \
  && ret=0


case $state in
  ops)
    # Operations
    _values "Operations" \
            "changeAccountUsername[Change Account Username]" \
            "deleteAccountOauthName[Unlink OAuth Account]" \
            "deleteAccountTfa[Disable Two-Factor Authentication]" \
            "deleteIpLimit[Remove IP Access Restriction]" \
            "getAccountInfo[Retrieve Account Details]" \
            "getAccountTfaSetup[Get Two-Factor Setup Data]" \
            "getHome[Get Home Data]" \
            "getSearch[Search Autocomplete]" \
            "logout[Log Out]" \
            "logoutAccountOauth[Logout of OAuth]" \
            "updateAccountApiKey[Generate New API Key]" \
            "updateAccountFeatures[Update Account Feature Flags]" \
            "updateAccountInfo[Update Account Information]" \
            "updateAccountIpLimits[Add IP Access Restriction]" \
            "updateAccountPassword[Change Account Password]" \
            "updateAccountSshKey[Update SSH Keys]" \
            "updateAccountTfa[Enable Two-Factor Authentication]"             "addBackup[Place Backup Order]" \
            "cancelBackup[Cancel Backup Service]" \
            "getBackupInfo[Get Backup Service Details]" \
            "getBackupInvoices[Get Backup Order Invoices]" \
            "getBackupLogin[Get Backup Storage Panel Login]" \
            "getBackupsList[List Backup Services]" \
            "getBackupsWelcomeEmail[Resend Backup Welcome Email]" \
            "getNewBackup[Get Backup Order Form Data]" \
            "updateBackupInfo[Update Backup Information]" \
            "validateBackupOrder[Validate Backup Order]"             "addAccountCreditCard[Add Credit Card to Account]" \
            "addBillingCreditCard[Add Credit Card for Billing]" \
            "addBillingPrepay[Create Prepay Deposit]" \
            "deleteAccountCreditCard[Remove Credit Card]" \
            "deleteBillingCreditCard[Delete Credit Card]" \
            "deleteBillingInvoice[Delete Invoice]" \
            "deleteBillingPrepay[Delete Prepay Balance]" \
            "getAffiliateBanners[List Affiliate Banner Assets]" \
            "getAffiliateRichReport[Get Affiliate Performance Report]" \
            "getAffiliateSalesGraph[Get Affiliate Sales Graph Data]" \
            "getAffiliateSalesReport[Get Affiliate Sales Report]" \
            "getAffiliateTrafficGraph[Get Affiliate Traffic Graph Data]" \
            "getAffiliateWebTraffic[List Affiliate Web Traffic Entries]" \
            "getBillingCart[Get Shopping Cart Contents]" \
            "getBillingCreditCardVerify[Get Credit Card Verification Requirements]" \
            "getBillingInvoice[Get Invoice Details]" \
            "getBillingInvoices[List Account Invoices]" \
            "getBillingPrePays[List Prepay Balances]" \
            "getInvoices[Get Invoices]" \
            "initiatePayment[Initiate Payment]" \
            "postBillingCreditCardVerify[Submit Credit Card Verification]" \
            "updateAccountCreditCard[Update Credit Card]" \
            "updateAffiliateDockSetup[Configure Affiliate Dock Settings]" \
            "updateAffiliateLandingPage[Configure Affiliate Landing Page]" \
            "updateAffiliatePaymentSetup[Configure Affiliate Payout Preferences]" \
            "updateBillingCreditCard[Update Credit Card Details]" \
            "updateBillingPaymentMethod[Update Default Payment Method]"             "addDnsDomain[Create DNS Domain]" \
            "addDnsRecord[Add DNS Record to Domain]" \
            "deleteDnsDomain[Delete DNS Domain]" \
            "deleteDnsRecord[Delete DNS Record]" \
            "getDnsDomain[List Domain DNS Records]" \
            "getDnsList[List DNS Domains]" \
            "updateDnsRecord[Update DNS Record]"             "addDomain[Place Domain Order]" \
            "addDomainDnssec[Add Domain DNSSEC Records]" \
            "addDomainNameserver[Add Registered Nameserver]" \
            "cancelDomain[Cancel Domain Order]" \
            "deleteDomainDnssec[Remove Domain DNSSEC Records]" \
            "deleteDomainNameserver[Delete Registered Nameserver]" \
            "getDomainContact[Get Domain Contact Details]" \
            "getDomainDnssec[Get Domain DNSSEC Records]" \
            "getDomainInfo[Get Domain Order]" \
            "getDomainInvoices[Get Domain Invoices]" \
            "getDomainLookup[Lookup Domain Availability and Pricing]" \
            "getDomainNameservers[List Registered Nameservers]" \
            "getDomainOrderFields[Get Domain Order Fields]" \
            "getDomainOrderSearchResults[Get Domain Order Search Results]" \
            "getDomainRenewal[Start Domain Renewal Flow]" \
            "getDomainSearch[Search Domain Suggestions]" \
            "getDomainTransfer[Start Domain Transfer Flow]" \
            "getDomainWhoisPrivacy[Get Whois Privacy Status]" \
            "getDomainsList[List Domain Orders]" \
            "getDomainsWelcomeEmail[Resend Domain Welcome Email]" \
            "getNewDomain[Get Domain Ordering Information]" \
            "patchDomains[Validate Domain Order]" \
            "postDomainRenewal[Request Domain Renewal]" \
            "postDomainTransfer[Request Domain Transfer]" \
            "putDomains[Domain Order Search]" \
            "updateDomainContact[Update Domain Contact Details]" \
            "updateDomainInfo[Update Domain Order]" \
            "updateDomainNameservers[Replace Nameserver Set]" \
            "updateDomainWhoisPrivacy[Update Whois Privacy]"             "addFloatingIp[Place Floating IP Order]" \
            "floatingIpsCancel[Cancel Floating IP]" \
            "getFloatingIpInfo[View Floating IP]" \
            "getFloatingIpInvoices[Get Floating IP Invoices]" \
            "getFloatingIpsList[List Floating IPs]" \
            "getFloatingIpsWelcomeEmail[Resend Floating IPs Welcome Email]" \
            "getNewFloatingIp[Get Floating IP Ordering Information]" \
            "postFloatingIpsChangeIp[Change Floating IP Target]" \
            "putFloatingIps[Validate Floating IP Order]" \
            "updateFloatingIpInfo[Update Floating IP]"             "addLicense[Place License Order]" \
            "getLicenseInfo[Get License]" \
            "getLicenseInvoices[Get License Invoices]" \
            "getLicenseList[List Licenses]" \
            "getLicenseOrderCatTagInfo[Get License Order Information for Category]" \
            "getLicensesWelcomeEmail[Resend License Welcome Email]" \
            "getNewLicense[Get License Order Information]" \
            "licensesCancel[Cancel License]" \
            "postLicenseChangeIp[Change License IP]" \
            "putLicenses[Validate License Order]" \
            "updateLicenseInfo[Update License]"             "addMail[Place Mail Order]" \
            "addRule[Create Deny Rule]" \
            "createMailAlert[Create Mail Alert]" \
            "deleteMailAlert[Delete Mail Alert]" \
            "deleteRule[Delete Deny Rule]" \
            "delistBlock[Remove Email Address from Block List]" \
            "getMailAlerts[List Mail Alerts]" \
            "getMailBlocks[List Blocked Email Addresses]" \
            "getMailDelist[Get Delist Status]" \
            "getMailDeliverability[Get Deliverability Metrics]" \
            "getMailInfo[Get Mail Order]" \
            "getMailInvoices[Get Mail Invoices]" \
            "getMailList[List Mail Orders]" \
            "getMailWelcomeEmail[Resend Mail Welcome Email]" \
            "getNewMail[Get Mail Ordering Information]" \
            "getRules[List Deny Rules]" \
            "getStats[Get Mail Usage Statistics]" \
            "mailCancel[Cancel Mail]" \
            "postMailDelist[Delist a Blocked Sender]" \
            "putMail[Validate Mail Order]" \
            "resetMailPassword[Reset Mail Password]" \
            "sendAdvMail[Send Email with Advanced Options]" \
            "sendMail[Send Email]" \
            "updateMailAlert[Update Mail Alert]" \
            "updateMailInfo[Update Mail Order]" \
            "viewMailLog[View Mail Log]"             "getCaptcha[Get Captcha Challenge]" \
            "getCountries[Get Countries]" \
            "getInfo[Get Server Info]" \
            "getLoginInfo[Get Login Info]" \
            "getMPServers[List Marketplace Servers]" \
            "getOauthRedirect[Get OAuth Redirect URL]" \
            "getTimezones[Get Available Timezones]" \
            "patchOauthTwoFactor[Complete OAuth Two-Factor Verification]" \
            "pingServer[Ping Server]" \
            "postOauthCallback[OAuth Callback]" \
            "submitLogin[Submit Login Information]" \
            "submitSignup[Submit Signup Information]"             "addQs[Place QuickServer Order]" \
            "deleteQsBackup[Delete QuickServer Backup]" \
            "doQsBlockSmtp[Block QuickServer SMTP]" \
            "doQsDisableCd[Disable CD Drive]" \
            "doQsDisableQuota[Disable Quotas]" \
            "doQsEjectCd[Eject CD Drive]" \
            "doQsEnableQuota[Enable Quotas]" \
            "doQsRestart[Restart QuickServer]" \
            "doQsStart[Start QuickServer]" \
            "doQsStop[Stop QuickServer]" \
            "downloadQsBackup[Download QuickServer Backup]" \
            "getNewQs[Get QuickServer Ordering Information]" \
            "getQsBackups[List QuickServer Backups]" \
            "getQsChangeHostname[Get QuickServer Hostname]" \
            "getQsChangeRootPassword[Get Change Root Password Info]" \
            "getQsChangeTimezone[Get Timezone Info]" \
            "getQsChangeWebuzoPassword[Webuzo Change Pass Info]" \
            "getQsInfo[Get QuickServer Order]" \
            "getQsInsertCd[Insert CD Information]" \
            "getQsInvoices[Get QuickServer Invoices]" \
            "getQsList[List QuickServers]" \
            "getQsReinstallOs[QuickServer Reinstall OS Options]" \
            "getQsResetPassword[Reset QuickServer Password Info]" \
            "getQsReverseDns[Reverse DNS Info]" \
            "getQsSetupVnc[VNC Setup Info]" \
            "getQsTrafficUsage[Get Traffic Usage]" \
            "getQsViewDesktop[Get View Desktop Info]" \
            "getQsWelcomeEmail[Resend QuickServer Welcome Email]" \
            "postQsBackup[Create QuickServer Backup]" \
            "postQsChangeHostname[Update QuickServer Hostname]" \
            "postQsChangeRootPassword[Change Root Password]" \
            "postQsChangeTimezone[Change QuickServer Timezone]" \
            "postQsChangeWebuzoPassword[Change Webuzo Password]" \
            "postQsInsertCd[Insert CD in QuickServer]" \
            "postQsReinstallOs[Reinstall QuickServer OS]" \
            "postQsResetPassword[Reset QuickServer Password]" \
            "postQsReverseDns[Update Reverse DNS]" \
            "postQsSetupVnc[Setup VNC]" \
            "postQsTrafficUsage[Search Traffic Usage]" \
            "postQsViewDesktop[Update View Desktop]" \
            "postQuickServerRestore[Restore QuickServer from Backup]" \
            "putQs[Validate QuickServer Order]" \
            "quickserversCancel[Cancel QuickServer Order]" \
            "updateQsInfo[Update QuickServer Order]"             "addSsl[Place SSL Cert Order]" \
            "getNewSsl[SSL Cert Ordering Information]" \
            "getSslInfo[Get SSL Cert Info]" \
            "getSslInvoices[Get SSL Cert Invoices]" \
            "getSslList[List SSL Certs]" \
            "getSslWelcomeEmail[Resend SSL Welcome Email]" \
            "putSsl[Validate SSL Cert Order]" \
            "sslCancel[Cancel SSL Certificate Service]" \
            "updateSslInfo[Update SSL Cert Order]"             "cancelScrubIp[Cancel Scrub IP Service]" \
            "createFilter[Create Traffic Filter]" \
            "createGeoRule[Create Geo Firewall Rule]" \
            "createRule[Create Firewall Rule]" \
            "deleteFilter[Delete Traffic Filter]" \
            "disableScrub[Disable Scrub Protection]" \
            "enableScrub[Enable Scrub Protection]" \
            "getOrderDetail[Get Scrub IP Ordering Information]" \
            "getScrubIpDetails[Get Scrub IP Details]" \
            "getScrubIpFilterTypes[List Scrub Filter Types]" \
            "getScrubIpInvoices[Get ScrubIp Invoices]" \
            "getScrubIpLogs[Get Scrub IP Logs]" \
            "getScrubIpsList[List Scrub IP Services]" \
            "placeScrubOrder[Place Scrub IP Order]" \
            "scrubIpsDeleteGeoRule[Delete Geo Firewall Rule]" \
            "scrubIpsDeleteRule[Delete Firewall Rule]"             "addServer[Place Server Order]" \
            "buyItNowServerOrder[Get Buy Now Server Options]" \
            "getMPServers[List Marketplace Servers]" \
            "getNewServer[Server Ordering Information]" \
            "getServerInfo[Get Server Order]" \
            "getServerInvoices[Get Server Invoices]" \
            "getServerList[List Servers]" \
            "getServerReverseDns[Reverse DNS Info]" \
            "getServersWelcomeEmail[Resend Server Welcome Email]" \
            "placeBuyNowServer[Place Buy Now Server Order]" \
            "postServerReverseDns[Update Reverse DNS]" \
            "putServers[Validate Server Order]" \
            "serverIpmiLiveGet[Server IPMI Live Information]" \
            "serverIpmiLivePost[Server IPMI Live Setup]" \
            "serverIpmiPowerGet[Get IPMI Power Status]" \
            "serverIpmiPowerPost[Server IPMI Power]" \
            "serversCancel[Cancel Server Service]" \
            "updateServerInfo[Update Server Order]"             "addNewTicket[Create New Ticket]" \
            "closeTicket[Close Ticket]" \
            "deleteTicketInfo[Close Ticket]" \
            "getNewTicket[Gets Information for creating a new ticket.]" \
            "getTicketInfo[Get Ticket Information]" \
            "getTicketsList[List Support Tickets]" \
            "postTicketInfo[Reply To Ticket]" \
            "postTicketsList[Search Support Tickets]" \
            "putTicketInfo[Update Ticket]" \
            "replyTicket[Reply Ticket]" \
            "updateTicketInfo[Update Ticket]"             "addVps[Place VPS Order]" \
            "deleteVpsBackup[Delete VPS Backup]" \
            "doVpsBlockSmtp[Blocks SMTP]" \
            "doVpsDisableCd[Disable CD Drive]" \
            "doVpsDisableQuota[Disable Quotas]" \
            "doVpsEjectCd[Eject CD Drive]" \
            "doVpsEnableQuota[Enable Quotas]" \
            "doVpsRestart[Restart VPS]" \
            "doVpsStart[Start VPS]" \
            "doVpsStop[Stop VPS]" \
            "downloadVpsBackup[Download VPS Backup]" \
            "getNewVps[VPS Ordering Information]" \
            "getVpsBackups[Get VPS Backups List]" \
            "getVpsBuyHdSpace[HD Space Addon Info]" \
            "getVpsBuyIp[Additional IP Addon Info]" \
            "getVpsChangeTimezone[Get Timezone Info]" \
            "getVpsInfo[Get VPS Order]" \
            "getVpsInvoices[Get VPS Invoices]" \
            "getVpsList[List VPS Orders]" \
            "getVpsReinstallOs[VPS Reinstall OS Options]" \
            "getVpsReverseDns[Reverse DNS Info]" \
            "getVpsSetupVnc[VNC Setup Info]" \
            "getVpsSlices[Slice Upgrade Info]" \
            "getVpsTrafficUsage[Get Traffic Usage]" \
            "getVpsViewDesktop[Get View Desktop Info]" \
            "getVpsWelcomeEmail[Resend VPS Welcome Email]" \
            "postVpsBackup[Start a VPS Backup]" \
            "postVpsBuyHdSpace[Purchase HD Space Addon]" \
            "postVpsBuyIp[Purchase Additional IP]" \
            "postVpsChangeHostname[Update VPS Hostname]" \
            "postVpsChangeRootPassword[Change VPS Root Password]" \
            "postVpsChangeTimezone[Change VPS Timezone]" \
            "postVpsChangeWebuzoPassword[Change Webuzo Password]" \
            "postVpsInsertCd[Insert CD in VPS]" \
            "postVpsReinstallOs[Reinstall VPS OS]" \
            "postVpsResetPassword[Reset VPS Password]" \
            "postVpsRestore[Restore VPS from Backup]" \
            "postVpsReverseDns[Update Reverse DNS]" \
            "postVpsSetupVnc[Setup VNC]" \
            "postVpsSlices[Purchase Slice Upgrade]" \
            "postVpsViewDesktop[Update View Desktop]" \
            "putVps[Validate VPS Order]" \
            "updateVpsInfo[Update VPS Order]" \
            "vPSCancel[Cancel VPS Service]"             "addWebsite[Place Website Order]" \
            "getNewWebsite[Website Ordering Information]" \
            "getWebsiteBuyIp[Get Website IP Information]" \
            "getWebsiteInfo[Get Website Order]" \
            "getWebsiteInvoices[Get Website Invoices]" \
            "getWebsiteList[Get Website Listing]" \
            "getWebsitesBackups[Get Website Backups]" \
            "getWebsitesLogin[Hosting Panel Auto Login]" \
            "getWebsitesWelcomeEmail[Resend Website Welcome Email]" \
            "gettWebsiteReverseDns[Get Website Reverse DNS]" \
            "postWebsiteBuyIp[Update Website IP DNS]" \
            "postWebsiteMigration[Request Website Migration]" \
            "postWebsitesReverseDns[Update Website Reverse DNS]" \
            "putWebsites[Validate Webhosting Order]" \
            "updateWebsiteInfo[Update Website Order]" \
            "webhostingCancel[Cancel Website]" \

    _arguments "(--help)--help[Print information about operation]"

    ret=0
    ;;
  args)
    case $line[1] in
      changeAccountUsername)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteAccountOauthName)
        local -a _op_arguments
        _op_arguments=(
          "name=:[PATH] "
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteAccountTfa)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteIpLimit)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getAccountInfo)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getAccountTfaSetup)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getHome)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getSearch)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      logout)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      logoutAccountOauth)
        local -a _op_arguments
        _op_arguments=(
          "name=:[PATH] "
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateAccountApiKey)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateAccountFeatures)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateAccountInfo)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateAccountIpLimits)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateAccountPassword)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateAccountSshKey)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateAccountTfa)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addBackup)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      cancelBackup)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The backup service ID. Use the &#39;backup_id&#39; from &#39;GET /backups&#39; to identify the service."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getBackupInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The backup service ID. Use the &#39;backup_id&#39; from &#39;GET /backups&#39; to identify the service."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getBackupInvoices)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The backup service ID. Use the &#39;backup_id&#39; from &#39;GET /backups&#39; to identify the service."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getBackupLogin)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The backup service ID. Use the &#39;backup_id&#39; from &#39;GET /backups&#39; to identify the service."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getBackupsList)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getBackupsWelcomeEmail)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The backup service ID. Use the &#39;backup_id&#39; from &#39;GET /backups&#39; to identify the service."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getNewBackup)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateBackupInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The backup service ID. Use the &#39;backup_id&#39; from &#39;GET /backups&#39; to identify the service."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      validateBackupOrder)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addAccountCreditCard)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addBillingCreditCard)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addBillingPrepay)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteAccountCreditCard)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The credit card ID. Use the card ID returned from &#39;POST /account/creditcards&#39; or listed in &#39;/billing/creditcards&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteBillingCreditCard)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The credit card ID to remove. Use IDs from &#39;GET /billing/creditcards&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteBillingInvoice)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The invoice ID to delete. Only unpaid invoices can be deleted."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteBillingPrepay)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The prepay balance ID to delete."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getAffiliateBanners)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getAffiliateRichReport)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getAffiliateSalesGraph)
        local -a _op_arguments
        _op_arguments=(
                    "days=:[QUERY] Number of days of sales history to include in the graph data. Determines the time window for the returned data points."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getAffiliateSalesReport)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getAffiliateTrafficGraph)
        local -a _op_arguments
        _op_arguments=(
                    "days=:[QUERY] Number of days of traffic history to include in the graph data. Determines the time window for the returned data points."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getAffiliateWebTraffic)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getBillingCart)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getBillingCreditCardVerify)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The credit card ID to verify. Use the ID returned from &#39;POST /billing/creditcards&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getBillingInvoice)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The invoice ID. Use IDs from &#39;GET /billing/invoices&#39; or from order responses."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getBillingInvoices)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getBillingPrePays)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getInvoices)
        local -a _op_arguments
        _op_arguments=(
                    "searchString=:[QUERY] pass an optional search string for looking up inventory"
"skip=:[QUERY] number of records to skip for pagination"
"limit=:[QUERY] maximum number of records to return"
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      initiatePayment)
        local -a _op_arguments
        _op_arguments=(
          "method=:[PATH] The payment method to use. Valid values: &#39;cc&#39; (credit card), &#39;paypal&#39;, &#39;prepay&#39;, &#39;payssion&#39;, &#39;payu&#39;, &#39;ccavenue&#39;, &#39;cashfree&#39;, &#39;coinbase&#39;, &#39;btcpay&#39;."
"invoices=:[PATH] A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#39;/backups/order&#39;, &#39;/vps/order&#39;) and by &#39;/billing/invoices&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postBillingCreditCardVerify)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The credit card ID to verify. Use the ID returned from &#39;POST /billing/creditcards&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateAccountCreditCard)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The credit card ID. Use the card ID returned from &#39;POST /account/creditcards&#39; or listed in &#39;/billing/creditcards&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateAffiliateDockSetup)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateAffiliateLandingPage)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateAffiliatePaymentSetup)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateBillingCreditCard)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The credit card ID. Use IDs from &#39;GET /billing/creditcards&#39; or the response from &#39;POST /billing/creditcards&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateBillingPaymentMethod)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addDnsDomain)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addDnsRecord)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The DNS Domain ID."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteDnsDomain)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The DNS domain ID to delete. Use the &#39;id&#39; from &#39;GET /dns&#39; to identify the domain."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteDnsRecord)
        local -a _op_arguments
        _op_arguments=(
          "domainId=:[PATH] The DNS domain ID. Use the &#39;id&#39; from &#39;GET /dns&#39; to identify the domain."
"recordId=:[PATH] The DNS record ID within the domain. Use the record &#39;id&#39; from &#39;GET /dns/{id}&#39; to identify the record."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDnsDomain)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The DNS domain ID. Use the &#39;id&#39; from &#39;GET /dns&#39; to identify the domain."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDnsList)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateDnsRecord)
        local -a _op_arguments
        _op_arguments=(
          "domainId=:[PATH] The DNS domain ID. Use the &#39;id&#39; from &#39;GET /dns&#39; to identify the domain."
"recordId=:[PATH] The DNS record ID within the domain. Use the record &#39;id&#39; from &#39;GET /dns/{id}&#39; to identify the record."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addDomain)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addDomainDnssec)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addDomainNameserver)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      cancelDomain)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteDomainDnssec)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
          "action=:[QUERY] Set to &#39;delete&#39; to remove all DNSSEC records."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteDomainNameserver)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
          "index=:[QUERY] The index of the registered nameserver from the registered nameservers list to delete."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDomainContact)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDomainDnssec)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDomainInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDomainInvoices)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDomainLookup)
        local -a _op_arguments
        _op_arguments=(
          "name=:[PATH] The full domain name to look up (for example &#39;example.com&#39;)."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDomainNameservers)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDomainOrderFields)
        local -a _op_arguments
        _op_arguments=(
          "domain=:[PATH] The fully qualified domain name (e.g. &#39;example.com&#39;)."
"regType=:[PATH] The registration type. Common values include &#39;register&#39; for new registrations and &#39;transfer&#39; for inbound transfers."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDomainOrderSearchResults)
        local -a _op_arguments
        _op_arguments=(
          "domain=:[PATH] The fully qualified domain name to look up (e.g. &#39;example.com&#39;)."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDomainRenewal)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDomainSearch)
        local -a _op_arguments
        _op_arguments=(
          "name=:[PATH] The base domain name to search (for example &#39;example&#39; or &#39;example.com&#39;)."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDomainTransfer)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDomainWhoisPrivacy)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDomainsList)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getDomainsWelcomeEmail)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getNewDomain)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      patchDomains)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postDomainRenewal)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postDomainTransfer)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      putDomains)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateDomainContact)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateDomainInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateDomainNameservers)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateDomainWhoisPrivacy)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The domain service ID. Use &#39;domain_id&#39; from &#39;GET /domains&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addFloatingIp)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      floatingIpsCancel)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The Floating IP service ID. Use the ID from &#39;GET /floating_ips&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getFloatingIpInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The Floating IP service ID. Use the ID from &#39;GET /floating_ips&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getFloatingIpInvoices)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The Floating IP service ID. Use the ID from &#39;GET /floating_ips&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getFloatingIpsList)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getFloatingIpsWelcomeEmail)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The Floating IP service ID. Use the ID from &#39;GET /floating_ips&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getNewFloatingIp)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postFloatingIpsChangeIp)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The Floating IP service ID. Use the ID from &#39;GET /floating_ips&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      putFloatingIps)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateFloatingIpInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The Floating IP service ID. Use the ID from &#39;GET /floating_ips&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addLicense)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getLicenseInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The license service ID. Use &#39;license_id&#39; from &#39;GET /licenses&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getLicenseInvoices)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The license service ID. Use &#39;license_id&#39; from &#39;GET /licenses&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getLicenseList)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getLicenseOrderCatTagInfo)
        local -a _op_arguments
        _op_arguments=(
          "catTag=:[PATH] The license category tag (e.g. &#39;cpanel&#39;, &#39;plesk&#39;). Obtain valid values from the &#39;GET /licenses/order&#39; response."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getLicensesWelcomeEmail)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The license service ID. Use &#39;license_id&#39; from &#39;GET /licenses&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getNewLicense)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      licensesCancel)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The license service ID. Use &#39;license_id&#39; from &#39;GET /licenses&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postLicenseChangeIp)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The license service ID. Use &#39;license_id&#39; from &#39;GET /licenses&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      putLicenses)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateLicenseInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The license service ID. Use &#39;license_id&#39; from &#39;GET /licenses&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addMail)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addRule)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      createMailAlert)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteMailAlert)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
          "alert_id=:[QUERY] Alert ID to delete."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteRule)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
"rule=:[PATH] The ID of the Rules entry."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      delistBlock)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getMailAlerts)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getMailBlocks)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getMailDelist)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getMailDeliverability)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getMailInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getMailInvoices)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getMailList)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getMailWelcomeEmail)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getNewMail)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getRules)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getStats)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
          "time=:[QUERY] The timeframe for the statistics."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      mailCancel)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postMailDelist)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      putMail)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      resetMailPassword)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      sendAdvMail)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      sendMail)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateMailAlert)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateMailInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      viewMailLog)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The mail service ID. Use &#39;mail_id&#39; from &#39;GET /mail&#39;."
          "id=:[QUERY] The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from &#39;GET /mail&#39; or &#39;GET /mail/{id}&#39;."
"origin=:[QUERY] Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address."
"mx=:[QUERY] Filter by the MX hostname the relay attempted delivery to.  For example &#39;mx.google.com&#39; would return messages destined for Gmail recipients. Maps to &#39;mxHostname&#39; in the &#39;MailLogEntry&#39; response."
"from=:[QUERY] Filter by SMTP envelope &#39;MAIL FROM&#39; address (exact match).  This is the address the relay used for bounce handling and may differ from the &#39;From:&#39; message header.  For header-level filtering use &#39;headerfrom&#39;."
"to=:[QUERY] Filter by SMTP envelope &#39;RCPT TO&#39; address (exact match).  This is the delivery address used by the relay and may differ from the &#39;To:&#39; header when BCC recipients are involved."
"subject=:[QUERY] Filter by email &#39;Subject&#39; header (exact match).  MIME-encoded subjects are decoded automatically in the response."
"mailid=:[QUERY] Filter by the relay-assigned mail ID string (exact match).  This corresponds to the &#39;id&#39; field in &#39;MailLogEntry&#39; and to the &#39;text&#39; value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as &#39;185997065c60008840&#39;."
"messageId=:[QUERY] Filter by the &#39;Message-ID&#39; email header using a substring (case-insensitive) match.  The &#39;Message-ID&#39; is assigned by the sending mail client and is visible in the &#39;messageId&#39; field of &#39;MailLogEntry&#39;."
"replyto=:[QUERY] Filter by the &#39;Reply-To&#39; message header address (exact match).  Only returns messages where this header was explicitly set."
"headerfrom=:[QUERY] Filter by the &#39;From&#39; message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope &#39;from&#39; parameter when sending on behalf of another address."
"delivered=:[QUERY] Filter by delivery status.  &#39;1&#39; returns only messages that were successfully delivered to the destination MX.  &#39;0&#39; returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status."
"skip=:[QUERY] Number of records to skip for pagination.  Use in combination with &#39;limit&#39; to page through large result sets.  Defaults to &#39;0&#39; (no skip)."
"limit=:[QUERY] Maximum number of records to return per page.  Defaults to &#39;100&#39;. Maximum allowed value is &#39;10000&#39;.  The response also includes a &#39;total&#39; field with the full matched count so you can calculate the number of pages."
"startDate=:[QUERY] Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#39;strtotime()&#39; such as &#39;2024-01-15&#39; or &#39;last monday&#39;.  Messages with a &#39;time&#39; value **greater than or equal to** this value will be included."
"endDate=:[QUERY] Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#39;strtotime()&#39; such as &#39;2024-01-31&#39; or &#39;yesterday&#39;.  Messages with a &#39;time&#39; value **less than or equal to** this value will be included."
"sort=:[QUERY] Field to sort results by.  Currently only &#39;time&#39; is supported (sorts by internal row ID which corresponds to chronological order)."
"dir=:[QUERY] Sort direction.  &#39;desc&#39; returns newest first (default), &#39;asc&#39; returns oldest first."
"groupby=:[QUERY] Controls how results are grouped.  &#39;recipient&#39; (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own &#39;recipient&#39;, &#39;delivered&#39;, &#39;response&#39;, and delivery metadata.  &#39;message&#39; collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The &#39;total&#39; count in the response matches the grouping mode."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getCaptcha)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getCountries)
        local -a _op_arguments
        _op_arguments=(
                    "fetch_by=:[QUERY] Get countries by iso2 or iso3 or numcode"
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getInfo)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getLoginInfo)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getMPServers)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getOauthRedirect)
        local -a _op_arguments
        _op_arguments=(
                    "provider=:[QUERY] The OAuth provider name (e.g. &#39;Google&#39;)."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getTimezones)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      patchOauthTwoFactor)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      pingServer)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postOauthCallback)
        local -a _op_arguments
        _op_arguments=(
                    "provider=:[QUERY] The OAuth provider name (e.g. &#39;Google&#39;)."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      submitLogin)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      submitSignup)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addQs)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteQsBackup)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
          "all=:[QUERY] Set to &#39;1&#39; to list all backups across all services, not just the ones for the given QuickServer."
"file=:[QUERY] The backup filename to delete."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doQsBlockSmtp)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doQsDisableCd)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doQsDisableQuota)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doQsEjectCd)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doQsEnableQuota)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doQsRestart)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doQsStart)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doQsStop)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      downloadQsBackup)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
          "all=:[QUERY] Set to &#39;1&#39; to list all backups across all services, not just the ones for the given QuickServer."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getNewQs)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsBackups)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
          "all=:[QUERY] Set to &#39;1&#39; to list all backups across all services, not just the ones for the given QuickServer."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsChangeHostname)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsChangeRootPassword)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsChangeTimezone)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsChangeWebuzoPassword)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsInsertCd)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsInvoices)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsList)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsReinstallOs)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsResetPassword)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsReverseDns)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsSetupVnc)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsTrafficUsage)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsViewDesktop)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getQsWelcomeEmail)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Quickserver ID"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postQsBackup)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postQsChangeHostname)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postQsChangeRootPassword)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postQsChangeTimezone)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postQsChangeWebuzoPassword)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postQsInsertCd)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postQsReinstallOs)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postQsResetPassword)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postQsReverseDns)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postQsSetupVnc)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postQsTrafficUsage)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postQsViewDesktop)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postQuickServerRestore)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      putQs)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      quickserversCancel)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateQsInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] QuickServer ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addSsl)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getNewSsl)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getSslInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] SSL certificate ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getSslInvoices)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] SSL Cert ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getSslList)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getSslWelcomeEmail)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] SSL Cert ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      putSsl)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      sslCancel)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] SSL Cert ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateSslInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] SSL certificate ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      cancelScrubIp)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] ScrubIp ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      createFilter)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] ScrubIp ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      createGeoRule)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] ScrubIp ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      createRule)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] ScrubIp ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteFilter)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] ScrubIp ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      disableScrub)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] ScrubIp ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      enableScrub)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] ScrubIp ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getOrderDetail)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getScrubIpDetails)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] ScrubIp ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getScrubIpFilterTypes)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getScrubIpInvoices)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] ScrubIp ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getScrubIpLogs)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Scrub Order ID"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getScrubIpsList)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      placeScrubOrder)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      scrubIpsDeleteGeoRule)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] ScrubIp ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      scrubIpsDeleteRule)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] ScrubIp ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addServer)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      buyItNowServerOrder)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getMPServers)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getNewServer)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getServerInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Server ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getServerInvoices)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Server ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getServerList)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getServerReverseDns)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Server ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getServersWelcomeEmail)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Server ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      placeBuyNowServer)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postServerReverseDns)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Server ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      putServers)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      serverIpmiLiveGet)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Server ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      serverIpmiLivePost)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Server ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      serverIpmiPowerGet)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Server ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      serverIpmiPowerPost)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Server ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      serversCancel)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Server ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateServerInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Server ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addNewTicket)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      closeTicket)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Ticket ID"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteTicketInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Ticket ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getNewTicket)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getTicketInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Ticket ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getTicketsList)
        local -a _op_arguments
        _op_arguments=(
                    "page=:[QUERY] Page number for paginated results."
"period=:[QUERY] How far back to show tickets from. Value is in days."
"view=:[QUERY] The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postTicketInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Ticket ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postTicketsList)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      putTicketInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] Ticket ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      replyTicket)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The ticket ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateTicketInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The ticket ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addVps)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      deleteVpsBackup)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
          "all=:[QUERY] Set to &#39;1&#39; to list all backups across all services, not just the ones for the given VPS."
"file=:[QUERY] The backup filename to delete."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doVpsBlockSmtp)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doVpsDisableCd)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doVpsDisableQuota)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doVpsEjectCd)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doVpsEnableQuota)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doVpsRestart)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doVpsStart)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      doVpsStop)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      downloadVpsBackup)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
          "all=:[QUERY] Set to &#39;1&#39; to list all backups across all services, not just the ones for the given VPS."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getNewVps)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getVpsBackups)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
          "all=:[QUERY] Set to &#39;1&#39; to list all backups across all services, not just the ones for the given VPS."
          )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getVpsBuyHdSpace)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getVpsBuyIp)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getVpsChangeTimezone)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getVpsInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getVpsInvoices)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getVpsList)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getVpsReinstallOs)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getVpsReverseDns)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getVpsSetupVnc)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getVpsSlices)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getVpsTrafficUsage)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getVpsViewDesktop)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getVpsWelcomeEmail)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postVpsBackup)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postVpsBuyHdSpace)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postVpsBuyIp)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postVpsChangeHostname)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postVpsChangeRootPassword)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postVpsChangeTimezone)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postVpsChangeWebuzoPassword)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postVpsInsertCd)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postVpsReinstallOs)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postVpsResetPassword)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postVpsRestore)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postVpsReverseDns)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postVpsSetupVnc)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postVpsSlices)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postVpsViewDesktop)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      putVps)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateVpsInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      vPSCancel)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] VPS ID number"
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      addWebsite)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getNewWebsite)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getWebsiteBuyIp)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The website service ID. Use &#39;website_id&#39; from &#39;GET /websites&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getWebsiteInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The website service ID. Use &#39;website_id&#39; from &#39;GET /websites&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getWebsiteInvoices)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The website service ID. Use &#39;website_id&#39; from &#39;GET /websites&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getWebsiteList)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getWebsitesBackups)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The website service ID. Use &#39;website_id&#39; from &#39;GET /websites&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getWebsitesLogin)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The website service ID. Use &#39;website_id&#39; from &#39;GET /websites&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      getWebsitesWelcomeEmail)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The website service ID. Use &#39;website_id&#39; from &#39;GET /websites&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      gettWebsiteReverseDns)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The website service ID. Use &#39;website_id&#39; from &#39;GET /websites&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postWebsiteBuyIp)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The website service ID. Use &#39;website_id&#39; from &#39;GET /websites&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postWebsiteMigration)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The website service ID. Use &#39;website_id&#39; from &#39;GET /websites&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      postWebsitesReverseDns)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The website service ID. Use &#39;website_id&#39; from &#39;GET /websites&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      putWebsites)
        local -a _op_arguments
        _op_arguments=(
                              )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      updateWebsiteInfo)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The website service ID. Use &#39;website_id&#39; from &#39;GET /websites&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
      webhostingCancel)
        local -a _op_arguments
        _op_arguments=(
          "id=:[PATH] The website service ID. Use &#39;website_id&#39; from &#39;GET /websites&#39;."
                    )
        _describe -t actions 'operations' _op_arguments -S '' && ret=0
        ;;
    esac
    ;;

esac

return ret
