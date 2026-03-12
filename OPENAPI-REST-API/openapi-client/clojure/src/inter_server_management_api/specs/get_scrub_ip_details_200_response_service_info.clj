(ns inter-server-management-api.specs.get-scrub-ip-details-200-response-service-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def get-scrub-ip-details-200-response-service-info-data
  {
   (ds/opt :scrub_ip_id) string?
   (ds/opt :scrub_ip_type) string?
   (ds/opt :scrub_ip_custid) string?
   (ds/opt :scrub_ip_order_date) string?
   (ds/opt :scrub_ip_ip) string?
   (ds/opt :scrub_ip_service_id) string?
   (ds/opt :scrub_ip_service_module) string?
   (ds/opt :scrub_ip_status) string?
   (ds/opt :scrub_ip_invoice) string?
   (ds/opt :scrub_ip_currency) string?
   (ds/opt :scrub_ip_coupon) string?
   (ds/opt :scrub_ip_comment) string?
   })

(def get-scrub-ip-details-200-response-service-info-spec
  (ds/spec
    {:name ::get-scrub-ip-details-200-response-service-info
     :spec get-scrub-ip-details-200-response-service-info-data}))
