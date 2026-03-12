(ns inter-server-management-api.specs.servers-buy-now-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.servers-buy-now-response-order-details :refer :all]
            )
  (:import (java.io File)))


(def servers-buy-now-response-data
  {
   (ds/opt :success) boolean?
   (ds/opt :text) string?
   (ds/opt :order_details) servers-buy-now-response-order-details-spec
   })

(def servers-buy-now-response-spec
  (ds/spec
    {:name ::servers-buy-now-response
     :spec servers-buy-now-response-data}))
