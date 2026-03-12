(ns inter-server-management-api.specs.url-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def url-request-data
  {
   (ds/opt :url) string?
   })

(def url-request-spec
  (ds/spec
    {:name ::url-request
     :spec url-request-data}))
