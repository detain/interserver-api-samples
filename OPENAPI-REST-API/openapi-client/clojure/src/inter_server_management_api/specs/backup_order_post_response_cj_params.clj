(ns inter-server-management-api.specs.backup-order-post-response-cj-params
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def backup-order-post-response-cj-params-data
  {
   (ds/opt :containerTagId) string?
   (ds/opt :CID) string?
   (ds/opt :OID) string?
   (ds/opt :TYPE) string?
   (ds/opt :ITEM1) string?
   (ds/opt :AMT1) string?
   (ds/opt :QTY1) int?
   (ds/opt :CURRENCY) string?
   })

(def backup-order-post-response-cj-params-spec
  (ds/spec
    {:name ::backup-order-post-response-cj-params
     :spec backup-order-post-response-cj-params-data}))
