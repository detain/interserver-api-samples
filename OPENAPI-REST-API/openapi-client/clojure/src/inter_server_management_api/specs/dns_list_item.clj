(ns inter-server-management-api.specs.dns-list-item
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def dns-list-item-data
  {
   (ds/opt :id) int?
   (ds/opt :name) string?
   (ds/opt :content) string?
   })

(def dns-list-item-spec
  (ds/spec
    {:name ::dns-list-item
     :spec dns-list-item-data}))
