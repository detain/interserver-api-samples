(ns inter-server-management-api.specs.domain-service-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-service-info-data
  {
   (ds/opt :domain_id) string?
   (ds/opt :domain_hostname) string?
   (ds/opt :domain_username) string?
   (ds/opt :domain_password) string?
   (ds/opt :domain_type) string?
   (ds/opt :domain_currency) string?
   (ds/opt :domain_expire_date) string?
   (ds/opt :domain_order_date) string?
   (ds/opt :domain_custid) string?
   (ds/opt :domain_status) string?
   (ds/opt :domain_invoice) string?
   (ds/opt :domain_coupon) string?
   })

(def domain-service-info-spec
  (ds/spec
    {:name ::domain-service-info
     :spec domain-service-info-data}))
