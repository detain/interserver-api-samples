(ns inter-server-management-api.specs.server-service-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-service-info-data
  {
   (ds/opt :server_id) string?
   (ds/opt :server_hostname) string?
   (ds/opt :server_custid) string?
   (ds/opt :server_type) string?
   (ds/opt :server_currency) string?
   (ds/opt :server_order_date) string?
   (ds/opt :server_invoice) string?
   (ds/opt :server_coupon) string?
   (ds/opt :server_status) string?
   (ds/opt :server_root) string?
   (ds/opt :server_dedicated_tag) string?
   (ds/opt :server_custom_tag) string?
   (ds/opt :server_comment) string?
   (ds/opt :server_initial_bill) string?
   (ds/opt :server_hardware) string?
   (ds/opt :server_ips) string?
   (ds/opt :server_monthly_bill) string?
   (ds/opt :server_setup) string?
   (ds/opt :server_discount) string?
   (ds/opt :server_rep) string?
   (ds/opt :server_date) string?
   (ds/opt :server_total_cost) string?
   (ds/opt :server_location) string?
   (ds/opt :server_hardware_ordered) string?
   (ds/opt :server_billed) string?
   (ds/opt :server_welcome_email) string?
   (ds/opt :server_dedicated_cpu) string?
   (ds/opt :server_dedicated_memory) string?
   (ds/opt :server_dedicated_hd1) string?
   (ds/opt :server_dedicated_hd2) string?
   (ds/opt :server_dedicated_bandwidth) string?
   (ds/opt :server_dedicated_ips) string?
   (ds/opt :server_dedicated_os) string?
   (ds/opt :server_dedicated_cp) string?
   (ds/opt :server_dedicated_raid) string?
   (ds/opt :server_extra) string?
   })

(def server-service-info-spec
  (ds/spec
    {:name ::server-service-info
     :spec server-service-info-data}))
