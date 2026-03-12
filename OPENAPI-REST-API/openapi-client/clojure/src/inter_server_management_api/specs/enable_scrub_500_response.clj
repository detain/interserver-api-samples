(ns inter-server-management-api.specs.enable-scrub-500-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def enable-scrub-500-response-data
  {
   (ds/req :success) boolean?
   (ds/req :text) string?
   })

(def enable-scrub-500-response-spec
  (ds/spec
    {:name ::enable-scrub-500-response
     :spec enable-scrub-500-response-data}))
