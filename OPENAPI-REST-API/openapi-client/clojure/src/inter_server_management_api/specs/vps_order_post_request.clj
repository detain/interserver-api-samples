(ns inter-server-management-api.specs.vps-order-post-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-order-post-request-data
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

(def vps-order-post-request-spec
  (ds/spec
    {:name ::vps-order-post-request
     :spec vps-order-post-request-data}))
