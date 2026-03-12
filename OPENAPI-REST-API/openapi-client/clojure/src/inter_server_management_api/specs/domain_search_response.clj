(ns inter-server-management-api.specs.domain-search-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-search-response-data
  {
   (ds/opt :success) boolean?
   (ds/opt :response_text) string?
   (ds/opt :response_time) string?
   (ds/opt :lookup) (s/coll-of any?)
   (ds/opt :suggest) (s/coll-of any?)
   (ds/opt :tlds) (s/coll-of string?)
   })

(def domain-search-response-spec
  (ds/spec
    {:name ::domain-search-response
     :spec domain-search-response-data}))
