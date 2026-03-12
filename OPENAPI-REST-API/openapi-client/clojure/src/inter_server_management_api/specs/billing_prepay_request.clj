(ns inter-server-management-api.specs.billing-prepay-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def billing-prepay-request-data
  {
   (ds/opt :module) string?
   (ds/opt :amount) float?
   (ds/opt :automatic_use) string?
   })

(def billing-prepay-request-spec
  (ds/spec
    {:name ::billing-prepay-request
     :spec billing-prepay-request-data}))
