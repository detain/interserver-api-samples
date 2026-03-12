(ns inter-server-management-api.specs.enable-scrub-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def enable-scrub-200-response-data
  {
   (ds/req :success) boolean?
   (ds/req :text) string?
   })

(def enable-scrub-200-response-spec
  (ds/spec
    {:name ::enable-scrub-200-response
     :spec enable-scrub-200-response-data}))
