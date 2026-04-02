(ns inter-server-management-api.specs.add-server-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def add-server-200-response-data
  {
   (ds/opt :text) string?
   (ds/opt :invoice) int?
   (ds/opt :order) int?
   })

(def add-server-200-response-spec
  (ds/spec
    {:name ::add-server-200-response
     :spec add-server-200-response-data}))
