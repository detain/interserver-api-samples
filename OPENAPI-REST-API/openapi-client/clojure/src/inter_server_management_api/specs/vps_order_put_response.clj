(ns inter-server-management-api.specs.vps-order-put-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.any-type :refer :all]
            )
  (:import (java.io File)))


(def vps-order-put-response-data
  {
   (ds/opt :continue) boolean?
   (ds/opt :errors) (s/coll-of any-type-spec)
   (ds/opt :coupon_code) int?
   (ds/opt :service_cost) int?
   (ds/opt :slice_cost) int?
   (ds/opt :service_type) int?
   (ds/opt :repeat_slice_cost) int?
   (ds/opt :original_slice_cost) int?
   (ds/opt :original_cost) int?
   (ds/opt :repeat_service_cost) int?
   (ds/opt :monthly_service_cost) int?
   (ds/opt :custid) string?
   (ds/opt :os) string?
   (ds/opt :slices) string?
   (ds/opt :platform) string?
   (ds/opt :controlpanel) string?
   (ds/opt :period) int?
   (ds/opt :location) int?
   (ds/opt :version) string?
   (ds/opt :hostname) string?
   (ds/opt :coupon) string?
   (ds/opt :rootpass) string?
   })

(def vps-order-put-response-spec
  (ds/spec
    {:name ::vps-order-put-response
     :spec vps-order-put-response-data}))
