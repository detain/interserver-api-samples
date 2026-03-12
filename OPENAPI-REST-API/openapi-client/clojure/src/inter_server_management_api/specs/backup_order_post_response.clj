(ns inter-server-management-api.specs.backup-order-post-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.backup-order-post-response-cj-params :refer :all]
            )
  (:import (java.io File)))


(def backup-order-post-response-data
  {
   (ds/opt :continue) boolean?
   (ds/opt :errors) (s/coll-of string?)
   (ds/opt :total_cost) string?
   (ds/opt :iid) string?
   (ds/opt :iids) (s/coll-of string?)
   (ds/opt :real_iids) (s/coll-of string?)
   (ds/opt :serviceId) int?
   (ds/opt :invoice_description) string?
   (ds/opt :cj_params) backup-order-post-response-cj-params-spec
   })

(def backup-order-post-response-spec
  (ds/spec
    {:name ::backup-order-post-response
     :spec backup-order-post-response-data}))
