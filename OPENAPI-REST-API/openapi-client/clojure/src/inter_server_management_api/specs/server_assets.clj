(ns inter-server-management-api.specs.server-assets
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-assets-data
  {
   (ds/opt :title) string?
   (ds/opt :size) int?
   (ds/opt :type) string?
   (ds/opt :header) (s/coll-of string?)
   (ds/opt :rows) (s/coll-of (s/coll-of string?))
   })

(def server-assets-spec
  (ds/spec
    {:name ::server-assets
     :spec server-assets-data}))
