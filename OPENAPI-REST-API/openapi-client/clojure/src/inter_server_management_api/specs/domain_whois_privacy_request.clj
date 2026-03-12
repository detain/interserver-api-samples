(ns inter-server-management-api.specs.domain-whois-privacy-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-whois-privacy-request-data
  {
   (ds/opt :func) string?
   (ds/opt :csrf_token) string?
   (ds/opt :domain_firstname) string?
   (ds/opt :domain_lastname) string?
   (ds/opt :domain_email) string?
   (ds/opt :domain_address) string?
   (ds/opt :domain_address2) string?
   (ds/opt :domain_address3) string?
   (ds/opt :domain_city) string?
   (ds/opt :domain_state) string?
   (ds/opt :domain_zip) string?
   (ds/opt :domain_country) string?
   (ds/opt :domain_phone) string?
   (ds/opt :domain_fax) string?
   (ds/opt :domain_company) string?
   (ds/opt :domain_extra) string?
   })

(def domain-whois-privacy-request-spec
  (ds/spec
    {:name ::domain-whois-privacy-request
     :spec domain-whois-privacy-request-data}))
