(ns inter-server-management-api.specs.mail-deliverability-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def mail-deliverability-response-data
  {
   (ds/opt :stat) any?
   (ds/opt :percent) float?
   (ds/opt :table_data) (s/coll-of (s/coll-of string?))
   })

(def mail-deliverability-response-spec
  (ds/spec
    {:name ::mail-deliverability-response
     :spec mail-deliverability-response-data}))
