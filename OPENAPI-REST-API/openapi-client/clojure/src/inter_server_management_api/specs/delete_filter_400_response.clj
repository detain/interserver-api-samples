(ns inter-server-management-api.specs.delete-filter-400-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def delete-filter-400-response-data
  {
   (ds/opt :success) boolean?
   (ds/opt :text) string?
   })

(def delete-filter-400-response-spec
  (ds/spec
    {:name ::delete-filter-400-response
     :spec delete-filter-400-response-data}))
