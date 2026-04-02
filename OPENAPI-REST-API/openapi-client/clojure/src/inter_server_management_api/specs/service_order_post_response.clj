(ns inter-server-management-api.specs.service-order-post-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def service-order-post-response-data
  {
   (ds/opt :continue) boolean?
   (ds/opt :errors) (s/coll-of string?)
   (ds/opt :total_cost) string?
   (ds/opt :iid) string?
   (ds/opt :iids) (s/coll-of string?)
   (ds/opt :real_iids) (s/coll-of string?)
   (ds/opt :serviceId) int?
   (ds/opt :invoice_description) string?
   })

(def service-order-post-response-spec
  (ds/spec
    {:name ::service-order-post-response
     :spec service-order-post-response-data}))
