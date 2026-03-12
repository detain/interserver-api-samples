(ns inter-server-management-api.specs.backup-order-put-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def backup-order-put-request-data
  {
   (ds/opt :validateOnly) boolean?
   (ds/opt :serviceType) int?
   (ds/opt :coupon) string?
   })

(def backup-order-put-request-spec
  (ds/spec
    {:name ::backup-order-put-request
     :spec backup-order-put-request-data}))
