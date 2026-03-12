(ns inter-server-management-api.specs.quickserver-service-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs. :refer :all]
            [inter-server-management-api.specs. :refer :all]
            [inter-server-management-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def quickserver-service-info-data
  {
   (ds/opt :qs_id) string?
   (ds/opt :qs_custid) string?
   (ds/opt :qs_server) string?
   (ds/opt :qs_ip) string?
   (ds/opt :qs_ipv6) any-type-spec
   (ds/opt :qs_vzid) string?
   (ds/opt :qs_currency) string?
   (ds/opt :qs_type) string?
   (ds/opt :qs_order_date) string?
   (ds/opt :qs_status) string?
   (ds/opt :qs_invoice) string?
   (ds/opt :qs_coupon) string?
   (ds/opt :qs_extra) string?
   (ds/opt :qs_hostname) string?
   (ds/opt :qs_server_status) string?
   (ds/opt :qs_comment) string?
   (ds/opt :qs_slices) string?
   (ds/opt :qs_vnc) string?
   (ds/opt :qs_vnc_port) any-type-spec
   (ds/opt :qs_rootpass) string?
   (ds/opt :qs_mac) string?
   (ds/opt :qs_os) string?
   (ds/opt :qs_version) string?
   (ds/opt :qs_location) string?
   (ds/opt :qs_platform) any-type-spec
   })

(def quickserver-service-info-spec
  (ds/spec
    {:name ::quickserver-service-info
     :spec quickserver-service-info-data}))
