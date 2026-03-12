(ns inter-server-management-api.specs.domain-client-link
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-client-link-data
  {
   (ds/opt :label) string?
   (ds/opt :link) string?
   (ds/opt :icon) string?
   (ds/opt :icon_text) string?
   (ds/opt :help_text) string?
   })

(def domain-client-link-spec
  (ds/spec
    {:name ::domain-client-link
     :spec domain-client-link-data}))
