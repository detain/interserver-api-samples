(ns inter-server-management-api.specs.license-service-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def license-service-info-data
  {
   (ds/req :license_id) string?
   (ds/req :license_type) string?
   (ds/req :license_currency) string?
   (ds/req :license_order_date) inst?
   (ds/req :license_custid) string?
   (ds/req :license_ip) string?
   (ds/req :license_status) string?
   (ds/req :license_invoice) string?
   (ds/req :license_coupon) string?
   (ds/opt :license_hostname) string?
   (ds/opt :license_key) string?
   (ds/opt :license_extra) string?
   })

(def license-service-info-spec
  (ds/spec
    {:name ::license-service-info
     :spec license-service-info-data}))
