(ns inter-server-management-api.specs.backup-order-put-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def backup-order-put-response-data
  {
   (ds/opt :continue) boolean?
   (ds/opt :errors) (s/coll-of string?)
   (ds/opt :serviceType) int?
   (ds/opt :serviceCost) string?
   (ds/opt :originalCost) string?
   (ds/opt :repeatServiceCost) string?
   (ds/opt :hostname) string?
   (ds/opt :password) string?
   (ds/opt :coupon) string?
   (ds/opt :couponCode) int?
   })

(def backup-order-put-response-spec
  (ds/spec
    {:name ::backup-order-put-response
     :spec backup-order-put-response-data}))
