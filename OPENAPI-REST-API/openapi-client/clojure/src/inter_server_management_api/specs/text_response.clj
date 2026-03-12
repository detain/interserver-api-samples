(ns inter-server-management-api.specs.text-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def text-response-data
  {
   (ds/opt :text) string?
   (ds/opt :message) string?
   })

(def text-response-spec
  (ds/spec
    {:name ::text-response
     :spec text-response-data}))
