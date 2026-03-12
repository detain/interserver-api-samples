(ns inter-server-management-api.specs.account-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.account-info-data :refer :all]
            [inter-server-management-api.specs.account-info-oauthproviders :refer :all]
            [inter-server-management-api.specs.account-info-oauth-config :refer :all]
            [inter-server-management-api.specs.account-info-limits :refer :all]
            [inter-server-management-api.specs.account-info-country-currencies :refer :all]
            )
  (:import (java.io File)))


(def account-info-data
  {
   (ds/opt :custid) string?
   (ds/opt :ima) string?
   (ds/opt :data) account-info-data-spec
   (ds/opt :ip) string?
   (ds/opt :oauthproviders) account-info-oauthproviders-spec
   (ds/opt :oauthconfig) account-info-oauth-config-spec
   (ds/opt :oauthadapters) (s/coll-of string?)
   (ds/opt :limits) account-info-limits-spec
   (ds/opt :language) string?
   (ds/opt :countryCurrencies) account-info-country-currencies-spec
   (ds/opt :enableLocales) boolean?
   (ds/opt :enableCurrencies) boolean?
   (ds/opt :gravatar) string?
   })

(def account-info-spec
  (ds/spec
    {:name ::account-info
     :spec account-info-data}))
