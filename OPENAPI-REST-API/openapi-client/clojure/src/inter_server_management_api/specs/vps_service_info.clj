(ns inter-server-management-api.specs.vps-service-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def vps-service-info-data
  {
   (ds/opt :vps_id) string?
   (ds/opt :vps_custid) string?
   (ds/opt :vps_server) string?
   (ds/opt :vps_ip) string?
   (ds/opt :vps_ipv6) any-type-spec
   (ds/opt :vps_vzid) string?
   (ds/opt :vps_currency) string?
   (ds/opt :vps_type) string?
   (ds/opt :vps_order_date) string?
   (ds/opt :vps_status) string?
   (ds/opt :vps_invoice) string?
   (ds/opt :vps_coupon) string?
   (ds/opt :vps_extra) string?
   (ds/opt :vps_hostname) string?
   (ds/opt :vps_server_status) string?
   (ds/opt :vps_comment) string?
   (ds/opt :vps_slices) string?
   (ds/opt :vps_vnc) string?
   (ds/opt :vps_vnc_port) string?
   (ds/opt :vps_rootpass) string?
   (ds/opt :vps_mac) string?
   (ds/opt :vps_os) string?
   (ds/opt :vps_version) string?
   (ds/opt :vps_location) string?
   (ds/opt :vps_platform) string?
   (ds/opt :vps_diskused) string?
   (ds/opt :vps_diskmax) string?
   })

(def vps-service-info-spec
  (ds/spec
    {:name ::vps-service-info
     :spec vps-service-info-data}))
