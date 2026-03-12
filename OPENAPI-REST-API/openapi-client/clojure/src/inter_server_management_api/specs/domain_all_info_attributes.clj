(ns inter-server-management-api.specs.domain-all-info-attributes
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.domain-all-info-attributes-contact-set :refer :all]
            [inter-server-management-api.specs.domain-name-server :refer :all]
            )
  (:import (java.io File)))


(def domain-all-info-attributes-data
  {
   (ds/opt :contact_set) domain-all-info-attributes-contact-set-spec
   (ds/opt :registry_createdate) string?
   (ds/opt :registry_expiredate) string?
   (ds/opt :tld_data) string?
   (ds/opt :let_expire) string?
   (ds/opt :auto_renew) string?
   (ds/opt :sponsoring_rsp) string?
   (ds/opt :gdpr_consent_status) string?
   (ds/opt :nameserver_list) (s/coll-of domain-name-server-spec)
   (ds/opt :registry_updatedate) string?
   (ds/opt :affiliate_id) string?
   (ds/opt :expiredate) string?
   })

(def domain-all-info-attributes-spec
  (ds/spec
    {:name ::domain-all-info-attributes
     :spec domain-all-info-attributes-data}))
