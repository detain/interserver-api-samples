(ns inter-server-management-api.specs.vps-order-put-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-order-put-request-data
  {
   (ds/req :osDistro) string?
   (ds/req :slices) int?
   (ds/req :vpsPlatform) string?
   (ds/req :period) int?
   (ds/req :location) int?
   (ds/req :osVersion) string?
   (ds/req :hostname) string?
   (ds/req :rootpass) string?
   (ds/opt :controlpanel) string?
   (ds/opt :coupon) string?
   (ds/opt :comment) string?
   })

(def vps-order-put-request-spec
  (ds/spec
    {:name ::vps-order-put-request
     :spec vps-order-put-request-data}))
