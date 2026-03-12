(ns inter-server-management-api.specs.server-client-link
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-client-link-data
  {
   (ds/req :label) string?
   (ds/req :link) string?
   (ds/opt :icon) string?
   (ds/opt :icon_text) string?
   (ds/opt :help_text) string?
   })

(def server-client-link-spec
  (ds/spec
    {:name ::server-client-link
     :spec server-client-link-data}))
