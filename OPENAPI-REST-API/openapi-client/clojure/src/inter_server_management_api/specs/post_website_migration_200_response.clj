(ns inter-server-management-api.specs.post-website-migration-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def post-website-migration-200-response-data
  {
   (ds/opt :text) string?
   (ds/opt :ticket) int?
   })

(def post-website-migration-200-response-spec
  (ds/spec
    {:name ::post-website-migration-200-response
     :spec post-website-migration-200-response-data}))
