(ns inter-server-management-api.specs.account-info-max-mind-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.account-info-max-mind-response-risk-score :refer :all]
            )
  (:import (java.io File)))


(def account-info-max-mind-response-data
  {
   (ds/opt :distance) string?
   (ds/opt :countryMatch) string?
   (ds/opt :countryCode) string?
   (ds/opt :freeMail) string?
   (ds/opt :anonymousProxy) string?
   (ds/opt :score) string?
   (ds/opt :binMatch) string?
   (ds/opt :binCountry) string?
   (ds/opt :err) string?
   (ds/opt :proxyScore) string?
   (ds/opt :ip_region) string?
   (ds/opt :ip_city) string?
   (ds/opt :ip_latitude) string?
   (ds/opt :ip_longitude) string?
   (ds/opt :binName) string?
   (ds/opt :ip_isp) string?
   (ds/opt :ip_org) string?
   (ds/opt :binNameMatch) string?
   (ds/opt :binPhoneMatch) string?
   (ds/opt :binPhone) string?
   (ds/opt :custPhoneInBillingLoc) string?
   (ds/opt :highRiskCountry) string?
   (ds/opt :queriesRemaining) string?
   (ds/opt :cityPostalMatch) string?
   (ds/opt :shipCityPostalMatch) string?
   (ds/opt :maxmindID) string?
   (ds/opt :ip_asnum) string?
   (ds/opt :ip_userType) string?
   (ds/opt :ip_countryConf) string?
   (ds/opt :ip_regionConf) string?
   (ds/opt :ip_cityConf) string?
   (ds/opt :ip_postalCode) string?
   (ds/opt :ip_postalConf) string?
   (ds/opt :ip_accuracyRadius) string?
   (ds/opt :ip_netSpeedCell) string?
   (ds/opt :ip_metroCode) string?
   (ds/opt :ip_areaCode) string?
   (ds/opt :ip_timeZone) string?
   (ds/opt :ip_regionName) string?
   (ds/opt :ip_domain) string?
   (ds/opt :ip_countryName) string?
   (ds/opt :ip_continentCode) string?
   (ds/opt :ip_corporateProxy) string?
   (ds/opt :carderEmail) string?
   (ds/opt :highRiskUsername) string?
   (ds/opt :highRiskPassword) string?
   (ds/opt :riskScore) account-info-max-mind-response-risk-score-spec
   (ds/opt :isTransProxy) string?
   (ds/opt :prepaid) string?
   (ds/opt :minfraud_version) string?
   (ds/opt :service_level) string?
   (ds/opt :explanation) string?
   (ds/opt :female_name) string?
   })

(def account-info-max-mind-response-spec
  (ds/spec
    {:name ::account-info-max-mind-response
     :spec account-info-max-mind-response-data}))
