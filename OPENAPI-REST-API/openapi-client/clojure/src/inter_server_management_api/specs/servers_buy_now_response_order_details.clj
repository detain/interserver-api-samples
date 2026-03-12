(ns inter-server-management-api.specs.servers-buy-now-response-order-details
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def servers-buy-now-response-order-details-data
  {
   (ds/opt :service_id) float?
   (ds/opt :invoice_id) float?
   })

(def servers-buy-now-response-order-details-spec
  (ds/spec
    {:name ::servers-buy-now-response-order-details
     :spec servers-buy-now-response-order-details-data}))
